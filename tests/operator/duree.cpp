#include "duree.hpp"

Duree::Duree(int heures, int minutes, int secondes) : m_heures(heures), m_minutes(minutes), m_secondes(secondes)
{
}

bool Duree::egal(Duree const &b)const
{
    return (m_heures == b.m_heures && m_minutes == b.m_minutes && m_secondes == b.m_secondes);
}

bool Duree::isInferior(Duree const &b)const
{
    if (m_heures < b.m_heures)
        return true;
    else if (m_heures == b.m_heures && m_minutes < b.m_minutes)
        return true;
    else if (m_heures == b.m_heures && m_minutes == b.m_minutes && m_secondes < b.m_secondes)
        return true;
    else
        return false;
}

bool operator==(Duree const &a, Duree const &b)
{
    return a.egal(b);
}

bool operator!=(Duree const &a, Duree const &b)
{
    return !(a==b);
}

bool operator<(Duree const &a, Duree const &b)
{
    return a.isInferior(b);
}

bool operator>(Duree const &a, Duree const &b)
{
    return !(a < b);
}

bool operator<=(Duree const &a, Duree const &b)
{
    return (b > a);
}

bool operator>=(Duree const &a, Duree const &b)
{
    return (a > b);
}