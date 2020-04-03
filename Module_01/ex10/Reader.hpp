#ifndef READER_HPP
# define READER_HPP

# include <iostream>
# include <fstream>
# include <string>

class Reader
{
    public:
        Reader();
        virtual ~Reader();

        static void read(std::istream &stream);
        static void openReadFile(std::string const &filename);
};

#endif