#include <iostream>
#include <string>

int main()
{
    std::string s = "HI THIS IS BRAIN";
    std::string *sp = &s;
    std::string &ref = s;  

    std::cout << *sp << std::endl;
    std::cout << ref << std::endl;
}