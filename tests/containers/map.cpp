#include <map>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    ifstream fichier("texte.txt");
    string mot;
    map<string, int> occurrences;
    while(fichier >> mot)   //On lit le fichier mot par mot
    {
         ++occurrences[mot]; //On incrémente le compteur pour le mot lu et on ajoute chaque mot dans occurrences.
    }
    cout << "Le mot 'banane' existe " << occurrences["banane"] << " fois dans le fichier" << endl; 
    return 0;
}