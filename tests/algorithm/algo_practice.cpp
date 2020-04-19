#include <iostream>
#include <cstdlib> //pour rand()                                                     
#include <ctime>   //pour time()                                                     
#include <vector>
#include <algorithm>
using namespace	std;

class Generer //foncteur
{
public:
    int operator()() const
    {
        return rand() % 10;  //On renvoie un nombre entre 0 et 9
    }
};

int main()
{
    srand(time(0));

    vector<int> tab(100,-1); //Un tableau de 100 cases                                  

    generate(tab.begin(), tab.end(), Generer());  //On génère les nombres aléatoires                                                                

    int const compteur = count(tab.begin(), tab.end(), 5); //Et on compte les occurrences du 5 

    cout << "Il y a " << compteur << " elements valant 5." << endl;

    return 0;
}