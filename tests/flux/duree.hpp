#ifndef DEF_DUREE
#define DEF_DUREE

#include <iostream>
#include <string>

//constructeur
class Duree
{
    public:

    //constructeur
    Duree(int heures = 0, int minutes = 0, int secondes = 0);
    void print(std::ostream &flux)const;

    private:

    int m_heures;
    int m_minutes;
    int m_secondes;
};

std::ostream &operator<<(std::ostream &flux, Duree const &duree);

#endif