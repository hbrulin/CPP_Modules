#include "duree.hpp"
using namespace std;

Duree::Duree(int heures, int minutes, int secondes) : m_heures(heures), m_minutes(minutes), m_secondes(secondes)
{
}

void Duree::operator+=(const Duree &a)
{
    m_secondes += a.m_secondes;
    m_minutes += m_secondes / 60;
    m_secondes %= 60;

    m_minutes += a.m_minutes;
    m_heures += m_minutes / 60;
    m_minutes %= 60;

    m_heures += a.m_heures;
}

void Duree::print()const
{
    cout << m_heures << "h" << m_minutes << "m" << m_secondes << "s" << endl;
}


//pas dans la classe
Duree operator+(Duree const &a, Duree const &b)
{
    Duree copy(a); //constructeur de copie
    copy += b;
    return copy;
}

