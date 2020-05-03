#include "iostream"
#include "fstream"
# include <sstream>

class Logger {

    private:
    //Objects of this class maintain a filebuf object as their internal stream buffer, which performs input/output operations on the file they are associated with (if any).
        std::ofstream file;

        void    logToConsole(std::string s);
        void    logToFile(std::string s);
        std::string    makeLogEntry(std::string s);

    public:
        Logger(std::string const &logfile);
        ~Logger();

        void log(std::string const &dest, std::string const &message);

};