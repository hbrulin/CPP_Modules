#include "duree.hpp"
using namespace std;

Duree::Duree(int heures, int minutes, int secondes) : m_heures(heures), m_minutes(minutes), m_secondes(secondes)
{
}

void Duree::print(ostream &flux)const
{
    flux << m_heures << "h" << m_minutes << "m" << m_secondes << "s" << endl;
}

//la fonction recoit un objet de la classe ostream en argument : cet objet c'est cout (on l'appelle flux pour éviter conflits)
//le second arg est une référence constante vers l'objet de type Duree qu'on veut afficher.
//la fonction envoie les attributs a l'objet flux, qui est cout
//ensuite elle renvoie une référence sur cet objet, ce qui permettra de faire "cout << duree1 << duree2"
ostream &operator<<(ostream &flux, Duree const &duree)
{
    duree.print(flux);
    return flux;
}
