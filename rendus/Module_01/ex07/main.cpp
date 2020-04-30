#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

int     error(int i)
{
    if (i == 1)
    {
        std::cout << "Invalid arguments" << std::endl;
        return 1;
    }
    if (i == 2)
    {
        std::cout << "Input file could not be opened" << std::endl;
        return 1;
    }
     if (i == 3)
    {
        std::cout << "Output file could not be opened" << std::endl;
        return 1;
    }
    return 1;
}

std::string ft_replace(std::string line, std::string s1, std::string s2)
{
    std::stringstream ss;
    size_t j;
    size_t s1_lenght = s1.size();

    for (size_t i = 0; i < line.size(); i++)
    {
        j = 0;
        while (line[i + j] == s1[j] && j < s1_lenght)
            j++;
        if (j == s1_lenght)
        {
            ss << s2;
            i += j -1;
        }
        else
            ss << line[i];  
    }
    return ss.str();
}

int main(int argc, char **argv)
{
    if (argc != 4)
        return error(1);
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    if (!filename.size() || !s1.size() || !s2.size())
        return error(1);

    std::fstream file;
    std::fstream output;
    file.open(filename);
    if (!file.is_open())
        return error(2);
    output.open((filename + ".replace").c_str(), std::fstream::out);
    if (!output.is_open())
        return error(3);

    std::string line;
    while (std::getline(file, line))
	{
		output << ft_replace(line, s1, s2);
		if (!file.eof())
			output << '\n';
    }
	file.close();
	output.close();
}