#include "duree.hpp"
using namespace std;

int main()
{
    Duree duree1(0, 10, 28), duree2(0, 15, 2);
    
    if (duree1 == duree2)
    {
        cout << "Les durees sont égales" << endl;
    }
    else
    {
        cout << "Les durees ne sont pas égales" << endl;
    }
    if (duree1 != duree2)
    {
        cout << "Les durees ne sont toujours pas égales" << endl;
    }
    if (duree1 < duree2)
    {
        cout << "Duree1 est inférieure à Duree2" << endl;
    }
    if (duree2 > duree1)
    {
        cout << "Duree2 est supérieure à Duree1" << endl;
    }

    Duree duree3(11, 10, 10), duree4(10, 10, 10);

    if (duree3 <= duree4)
    {
        cout << "Duree3 est inférieure ou égale à Duree4" << endl;
    }
    if (duree3 >= duree4)
    {
        cout << "Duree3 est supérieure ou égale à Duree4" << endl;
    }
    return (0);
}