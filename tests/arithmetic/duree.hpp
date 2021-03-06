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
    Duree& operator+=(const Duree &a);
    void print()const;

    private:

    int m_heures;
    int m_minutes;
    int m_secondes;
};

Duree operator+(Duree const &a, Duree const &b);

#endif