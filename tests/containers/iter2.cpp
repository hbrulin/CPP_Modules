#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    vector<string> tab;    //Un tableau de mots

    tab.push_back("les"); //On ajoute deux mots dans le tableau
    tab.push_back("Zeros");

    tab.insert(tab.begin(), "Salut"); //On insère le mot "Salut" au début

    //Affiche les mots donc la chaîne "Salut les Zeros"
    for(vector<string>::iterator it=tab.begin(); it!=tab.end(); ++it)
    {
        cout << *it << " ";
    }

    tab.erase(tab.begin()); //On supprime le premier mot

    //Affiche les mots donc la chaîne "les Zeros"
    for(vector<string>::iterator it=tab.begin(); it!=tab.end(); ++it)
    {
        cout << *it << " ";
    }

    return 0;
}