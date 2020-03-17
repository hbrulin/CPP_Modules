# CPP_Modules

Encapsulation.
Instanciation - comment on fabrique les objets.
C++ langage orienté objet basé sur des classes /= prototypes comme le js.

Les objets s'echangent des messages -> invocation de méthodes.

#Operateur '::' :
- :: - operateur de portée, sert a designer qqch sous la portee de qqch, a à voir avec les namespaces
- Utile aussi pour types imbriqués via des structures : 

```c++
struct voiture {
    struct moteur {
    };
}
voiture v;
voiture::moteur m; 
```
-> le type moteur est sous la portee du type voiture. 
-> pas besoin de typedef en c++

#Namespaces
Encapsulation des declarations dans des espaces. On peut avoir deux variables/fonctions qui ont le meme nom dans des namespaces differents.
```c++
namespace math {
    double pi = 3.1415926
    double e = 2.718
}
```
Puis #include "math.hpp" et utilisation : math::pi.

#Allocation dynamique
Pas de malloc en c++, mais "new".

```c++
int *pi = new int;
*pi = 12;
///Meme chose que :
int *pi = new int(12); //allocation dynamique d'un entier initiqliseé q 12.
delete pi; //free

int *t = new int[12]; //tableau de ints alloué
delete [] t; //free tab
```

#Type référence:
void swap(int &v1, int &v2) - prototype d'une fonction a laquelle on va passer v1 et v2 by reference, et pas by value, sans devoir utiliser des pointeurs.
si une fonction min qui prend &v1 et v2 return la minimale, elle va retourner la variable elle-meme, son adresse et non sa valeur. On peut donc faire quelque chose comme : min(a, b) = 45. Si a vaut 12 et b 24, a vaudra alors 45. 

#strings
Possible de concaténer des strings avec +, ou de les comparer avec ==.

#Attributs et méthodes
Les variables contenues dans les objets sont appelée attributs et les fonctions sont appelées méthodes.
Pour appeler la méthode d'un objet : objet.methode().
On n'accède pas aux attributs.

#Classes
Pour créer un objet, il faut créer une classe. On dit qu'un objet est une instance d'une classe. 
Une classe est constituée d'attributs et de méthodes.
Il est impossible d'initialiser les attributs lorsqu'on déclare la classe. Cela doit être fait via ce qu'on appelle un constructeur.

#Encapsulation
chaque attribut et chaque méthode d'une classe peut posséder son propre droit d'accès. deux droits d'accès différents :
    - public: l'attribut ou la méthode peut être appelé depuis l'extérieur de l'objet.
    - private: l'attribut ou la méthode ne peut pas être appelé depuis l'extérieur de l'objet. Par défaut, tous les éléments d'une classe sontprivate. Il faut définir public ou private. 

Il faut laisser les attributs en privé pour qu'ils ne soient pas modifiables depuis le main. C'est l'encapsulation. 
Il faut toujours passer par des méthodes (des fonctions) qui vont d'abord vérifier qu'on fait les choses correctement avant de modifier les attributs. Le contenu de l'objet reste une « boîte noire ».
La méthode a le droit de modifier l'attribut, car elle fait partie de la classe. 

Exception : si j'ai deux objets de la meme classe, je peux avec une méthode de cette classe appelée via l'objet 1, accéder aux attributs de l'objet 2. 

#Constructeur
Il faut initialiser les attributs à l'éiade d'un constructeur.
Le constructeut est un méthode, qui est appelée automatiquement à chaque fois que l'on crée un objet basé sur cette classe.
Un destructeur est une méthode appelée automatiquement lorsqu'un objet est détruit, par xemple à la fin de la fonction dans laquelle elle a été déclarée ou lors d'un delete si l'objet a été alloué avec new. 
Un constructeur par défaut est automatiquement créé par le compilateur. C'est un constructeur vide, qui ne fait rien de particulier.
On a cependant très souvent besoin de créer soi-même un constructeur qui remplace ce constructeur vide par défaut.

Il faut que la méthode constructeur ait le même nom que la classe, et elle ne doit rien renvoyer, meme pas void.

#Surcharge
La surcharge (également connue sous le nom de surdéfinition, polymorphisme ad hoc ou overloading en anglais) est une possibilité offerte par certains langages de programmation qui permet de choisir entre différentes versions d'une même fonction ou méthode selon le nombre et le type des arguments fournis.
On a un constructeur par défaut, et on peut créer un deuxieme constructeur avec des paramètres, qui permet lors de lq déclaration d'un objet d'initialiser ses attributs de manière différent des autres.

Le compilateur crée automatiquement un constructeur de copie : C'est une surcharge du constructeur qui initialise notre objet en copiant les valeurs des attributs de l'autre objet.

#Destructeur
Pas besoin si pas d'allocation dynamique.
Un destructeur est une méthode qui commence par un tilde (~) suivi du nom de la classe.
Un destructeur ne renvoie aucune valeur, pas mêmevoid(comme le constructeur).
Le destructeur ne peut prendre aucun paramètre. Il y a donc toujours un seul destructeur, il ne peut pas être surchargé.

#Méthodes constantes
Méthodes de lecture seules. La méthode ne modifie la valeur d'aucun attribut : méthode d'affichage.

#Associer des classes entre elles
Si j'ai une classe utilisée par une autre classe, je ne pourrais pas à partir de cette autre classe utiliser les attributs de la première, car ceux-ci sont privés. Je dois créer une nouvelle méthode appelée accesseur. 

#.hpp
recommandé de ne pas utiliser le "using namespace" dans un .hpp, pour éviter confusions.



#Compilation:
- avec g++


Ressources : 
- https://www.youtube.com/watch?v=Rub-JsjMhWY
- https://openclassrooms.com/en/courses/1894236-programmez-avec-le-langage-c