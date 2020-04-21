#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ifstream monFlux("C:/Nanoc/C++/data.txt");  //Ouverture d'un fichier en lecture

	/*Il y a trois manières différentes de lire un fichier :
	-	Ligne par ligne : getline();
	-	Mot par mot : chevrons >>;
	-	caractère par caractère : get().*/

	string ligne;
	getline(monFlux, ligne); //On lit une ligne complète. Renvoie false si on arrive à la fin du fichier.

	double nombre;
	monFlux >> nombre; //Lit un nombre à virgule depuis le fichier
	string mot;
	monFlux >> mot;    //Lit un mot depuis le fichier
	//Ce qui est lu est alors traduit endouble,intoustringselon le type de variable dans lequel on écrit.

	char a;
	monFlux.get(a);

	monFlux.close():
	return 0;
}