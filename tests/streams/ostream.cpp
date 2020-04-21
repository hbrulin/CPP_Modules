#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   ofstream monFlux("C:/Nanoc/scores.txt"); //possible chemin relatif aussi
   //Déclaration d'un flux permettant d'écrire dans le fichier
   // C:/Nanoc/scores.txt

   /*attention, Avant le C++11 les constructeurs de ofstream et de ifstream ne prenaient
	pas de string en arguments, seulement des const char*. c_str() premet de récupérer
	le char* contenue dans un objet de type string. */
	string const nomFichier("C:/Nanoc/scores.txt");
	ofstream monFlux(nomFichier.c_str());

	if(monFlux)    
    {
        monFlux << "Bonjour, je suis une phrase écrite dans un fichier." << endl;
        monFlux << 42.1337 << endl;
        int age(23);
        monFlux << "J'ai " << age << " ans." << endl;
    }
    else
    {
        cout << "ERREUR: Impossible d'ouvrir le fichier." << endl;
    }

	/*Ouverture en mode append*/
	ofstream monFlux(nomFichier.c_str(), ios::app);

   return 0;
}