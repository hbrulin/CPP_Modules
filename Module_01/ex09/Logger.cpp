#include "Logger.hpp"

Logger::Logger(std::string const &logfile)
{
	this->file.open(logfile, std::ios::app);
}

Logger::~Logger()
{
	if (this->file.is_open())
		this->file.close();
}

std::string    Logger::makeLogEntry(std::string s) {
    std::stringstream ss;
	std::chrono::time_point<std::chrono::system_clock> now = std::chrono::system_clock::now();
	std::time_t time_now = std::chrono::system_clock::to_time_t(now);

	tm utc_tm = *localtime(&time_now);
	ss << std::setfill('0') << "[" << (utc_tm.tm_year + 1900) << "/"
			<< std::setw(2) << utc_tm.tm_mon << "/"
			<< std::setw(2) << utc_tm.tm_mday << ":"
			<< std::setw(2) << utc_tm.tm_hour << "h"
			<< std::setw(2) << utc_tm.tm_min << "m"
			<< std::setw(2) << utc_tm.tm_sec << "s] ";
	ss << s;
	return (ss.str());
}

void    Logger::logToConsole(std::string s) {
    std::cout << this->makeLogEntry(s) << std::endl;
}

void    Logger::logToFile(std::string s) {
    if (!this->file.is_open() || !this->file.good())
		throw "Cannot write to log file.";
	file << this->makeLogEntry(s) << std::endl;
}

void Logger::log(std::string const &dest, std::string const &message)
{
	int key;
	void (Logger::* const actions[2])(std::string const s) = {
		&Logger::logToConsole,
		&Logger::logToFile
	};

	key = ("logToConsole" == dest) ? 0 :
		("logToFile" == dest) ? 1 : 2;
    if (key == 0 || key == 1)
	    (this->*actions[key])(message);
    else
        std::cout << "Invalid log destination" << std::endl;
}