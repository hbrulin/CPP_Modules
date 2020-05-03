#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <cstdio>


class Contact
{
    public:

    Contact(); // tout set a 0 dans le constructeur pour éviter segfault
    void    getData();
    void    printFour(int index)const; //comment faire pour les colonnes
    void    printAll()const;

    private:

    std::string m_firstName;
    std::string m_lastName;
    std::string m_nickname;
    std::string m_login;
    std::string m_postalAdress;
    std::string m_emailAdress;
    std::string m_phoneNumber;
    std::string m_birthday;
    std::string m_meal;
    std::string m_underwearColor;
    std::string m_darkestSecret;
};

#endif