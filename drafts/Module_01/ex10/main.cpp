#include "Reader.hpp"

int main(int argc, char const *argv[])
{
	Reader reader;

	if (argc == 1)
		reader.read(std::cin);
	else
	{
		for (int i = 1; i < argc; i++)
			reader.openReadFile(argv[i]);
	}
	return (0);
}