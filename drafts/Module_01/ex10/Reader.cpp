#include "Reader.hpp"

Reader::Reader()
{
}

Reader::~Reader()
{
}

void Reader::read(std::istream &stream)
{
	std::string line;

	while (std::getline(stream, line))
	{
		std::cout << line;
		if (!stream.eof())
			std::cout << std::endl;
	}
	if (stream.bad())
		throw "Problem while reading file";
}

void Reader::openReadFile(std::string const &filename)
{
	std::fstream infile(filename);

	if (!infile.is_open() || !infile.good())
		std::cerr << "cato9tails: " << filename  << ": " << std::strerror(errno) << std::endl;
	else
	{
		Reader::read(infile);
		infile.close();
	}
}