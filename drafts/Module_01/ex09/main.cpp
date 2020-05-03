#include "Logger.hpp"

int main(void)
{
	Logger logger("log");

	logger.log("logToConsole", "Test1");
	logger.log("logToConsole", "Test2");
	logger.log("logToConsole", "Test3");
	logger.log("logToFile", "Test4");
	logger.log("logToFile", "Test5");
	logger.log("logToFile", "Test6");
	logger.log("logToConsole", "Test7");
	logger.log("Bullshit", "Message");
	return (0);
}