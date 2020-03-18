#ifndef DEF_DUREE
#define DEF_DUREE

#include <iostream>
#include <string>


class Duree
{
    public:

    //constructeur
    Duree(int heures = 0, int minutes = 0, int secondes = 0);
    bool egal(Duree const &b)const;
    bool isInferior(Duree const &b)const;

    private:

    int m_heures;
    int m_minutes;
    int m_secondes;
};

//cette fonction appelee "operator==" recoit deux références sur les objets, références constantes qu'on ne peut pas modifier. 
//Elle va comparer les objets et renvoyer un booléen. 
bool operator==(Duree const &a, Duree const &b);
bool operator!=(Duree const &a, Duree const &b);
bool operator<(Duree const &a, Duree const &b);
bool operator>(Duree const &a, Duree const &b);
bool operator<=(Duree const &a, Duree const &b);
bool operator>=(Duree const &a, Duree const &b);

#endif