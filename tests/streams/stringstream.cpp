/*Les flux sur les chaînes de caractères permettent d'écrire un double ou n'importe quel
autre type dans un stringsous forme de texte.
Les flux sur les strings'appellent ostringstream et istringstream.
Pour créer de tels objets, il faut passer en argument au constructeur la string
sur laquelle le flux va travailler. 
On peut alors récupérer la chaîne de caractère en utilisant la méthode str().*/

#include <string>
#include <sstream>
#include <iostream>
using namespace std;

int main()
{
  ostringstream flux;   //Un flux permettant d'écrire dans une chaîne            
  double const pi(3.1415);

  flux << "Salut les";  //On écrit dans le flux grâce à l'opérateur <<          
  flux << " zeros";
  flux << " !";
  flux << pi;

  string const chaine = flux.str(); //On récupère la chaine                     

  cout << chaine << endl;  //Affiche 'Salut les zeros !'                        
  return 0;
}

/* ! On utilise les stringstreampour convertir des nombres en chaîne et vice-versa ! */