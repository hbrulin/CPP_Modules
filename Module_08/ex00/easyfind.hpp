#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>
# include <vector>
# include <iostream>

class NotFoundException: public std::exception
{
    public:
        virtual char const *what() const throw();
};

char const *NotFoundException::what() const throw()
{
    return "Element wasn't found!";
}

template <typename T>
int &easyfind(T tab, int i) //je renvoie une ref, pas une copie
{
    typename T::iterator it = std::find(tab.begin(), tab.end(), i); //il faut réutiliser typename ici
    if (it == tab.end())
        throw NotFoundException();
    return *it; //un itérateur se déréférence avec un pointeur
}

#endif
