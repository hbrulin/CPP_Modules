#include "duree.hpp"
using namespace std;

int main()
{
    Duree resultat, duree1(0, 10, 28), duree2(0, 15, 2);
    
    duree1.print();
    duree2.print();
    resultat = duree1 + duree2;
    resultat.print();
    return (0);
}