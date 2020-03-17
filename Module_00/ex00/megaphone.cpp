#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBREARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    for (int i = 1; i < ac; i++)
    {
        std::string s(av[i]); // j'initialise une string avec av[i]
        //we use string::size_type because a signed int is not guaranteed to represent the size of any string
        for (std::string::size_type j = 0; j < s.size(); j++)
            std::cout << (char)toupper(s[j]); //je caste en char sinon int s'affiche
    }
    std::cout << std::endl;

    return (0);
}