#include <iostream>
#include <string>

int main()
{
    std::string s = "HI THIS IS BRAIN";
    std::string *sp = &s;
    std::string &ref = s; 
    //les deux identificateurs s et ref representent la même variable, 
    //et celle-ci peut etre accedee et modifiee avec les deux indistinctement. 
    //Plus simple d'utilisation apres, je n'ai plus à passer dans une fonction 
    //l'adresse d'une variable mais je peux passer ref, la variable elle-même, et non plus une copie si j'avais passé s. 

    std::cout << *sp << std::endl;
    std::cout << ref << std::endl;
}