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
https://cpp.developpez.com/cours/cpp/?page=page_6

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

#Surchage d'opérateurs 
Le C++ permet de surcharger les opérateurs, c'est-à-dire de créer des méthodes pour modifier le comportement des symboles +, -, *, /, >=, etc. Voir dans les tests, on fait s'additionner les attributs de deux objets différents, ou faire que cout utilise << pour afficher tous les attributs d'un objet, alors que normalement il ne peut fonctionner qu'avec int, double, string...

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

#constructeur de copie
Si dans une classe on a un pointeur, qu'on copie un objet de cette classe à partir d'un autre avec le constructeur : le pointeur sera copié tel quel, c'est l'adresse qui sera copiée et pas une nouvelle allocation de pointeur pour le nouvel objet. Peut poser problème si les deux objets sont supprimés : on aura deux delete sur le meme pointeur.
Il faut donc définir le constructeur de copie, qui prendra pour paramètre une référence constante vers un objet du même type - voir sous-dir alloc. 
On peut aussi faire une méthode operator= qui vient nous permettre de faire david=goliath. La différence c'est qu'on pourrait faire ça après l'initialisation de david, alors que le constructeur de copie n'est utilisable qu'à l'initialisation. 
Cette méthode operator= renverra un pointeur *this, renverra l'objet lui-même. Si on fait cela, il faudra aussi penser à delete l'ancienne arme de david.
Si l'on a besoin d'écrire un constructeur de copie, alors il faut aussi obligatoirement écrire une surcharge de operator=. Voir sous-dir alloc.

#Pointeur this
Dans toutes les classes, on dispose d'un pointeur ayant pour nom this, qui pointe vers l'objet actuel.
Chaque objet possède un pointeur thisqui pointe vers l'objet lui-même.
Cela sert dans une méthode qui doit renvoyer un pointeur vers l'objet auquel elle appartient. La méthode renvoie l'objet lui-meme. 
c'est ce qu'on utilise dans les méthode qui définissent un opérateur : voir operateur += dans aritmetic. 

#Heritage
Technique qui permet de créer une classe à partir d'une autre classe. Evite de réécrire même code source. 
La classe Guerrierhérite de Personnage, la classe Magicien hérite de Personnage... On parle de classes mères et filles, ou de spécialisation de classes.
On peut avoir une classe qui hérite d'une classe qui hérite elle-meme d'une classe.

Important : on peut substituer un objet de la classe fille à un pointeur ou une référence vers un objet de la classe mère.
Exemple : ma classe Player a une méthode :
```c++
void    punch(Player &target)const;
````
Ma classe warrior hérite de la classe player.
Donc je peux faire 
```c++
player.punch(warrior);
```

On peut également faire, avec des pointeurs :
```c++
Player *myPlayer(0);
Warrior *myWarrior = new Warrior();
 
myPlayer = myWarrior;
```
-> on peut affecter un élément enfant à un élément parent, mais pas l'inverse.
-> pas vraiment une affectation, mais plutot une substitution de pointeur. 
Les objets restent comme ils sont dans la mémoire, on ne fait que diriger le pointeur vers la partie de la fille qui a été héritée. La classe fille est constituée de deux morceaux : les attributs et méthodes héritées de la mère d'une part, et les attributs et méthodes qui lui sont propres d'autre part. En faisant objetMere = objetFille;, on dirige le pointeur objetMerevers les attributs et méthodes hérités uniquement (figure suivante).
On ne pourra donc accéder qu'aux éléments de l'objetfille qui sont issus de la classe mère. 

#Héritage et constructeur
Dans le constructeur d'une classe fille, il faudra indiquer d'appeler d'abord le constructeur de la classe parente :
```c++
Wizard::Wizard() : Player(), m_mana(100)
```
Même chose avec les constructeurs surchargés :
```c++
Wizard(std::string name) : Player(name), m_mana(100); //constructeur surchargé de wizard
Player(std::string name); //constructeur surchargé de Player
```

#Portée protected
Pour les classes mères qui se font hériter.
Les éléments qui suivent protected ne sont pas accessibles depuis l'extérieur de la classe, sauf si c'est une classe fille.
Evite d'utiliser des accesseurs pour les attributs.

#Masquage
Si j'ai deux fonctions avec le même nom chez une classe mère et une classe fille, celle de la classe mère sera masquée. 
Si la fonction de la fille a juste qqs ajouts par rapport à celle de la mère, on peut préciser d'appeler la fonction de la mère puis écrire dessous le nouveau code. 
Voir la fonction introduction dans le sous-dir héritage. 

#string::size_type
The std::string type defines size_type to be the name of the appropriate type for holding the number of characters in a string. Whenever we need a local variable to contain the size of a string, we should use std::string::size_type as the type of that variable.
The reason that we have given cols a type of std::string::size_type is to ensure that cols is capable of containing the number of characters in the string, no matter how large that number might be. We could simply have said that cols has type int, and indeed, doing so would probably work. However, the value of cols depends on the size of the input to our program, and we have no control over how long that input might be. It is conceivable that someone might give our program a string so long that an int is insufficient to contain its length.

-> https://stackoverflow.com/questions/1181079/stringsize-type-instead-of-int

#Stringstream
http://www.cplusplus.com/reference/sstream/stringstream/

#Compilation:
- avec g++, clang++

#includes
cctype : character handling function : http://www.cplusplus.com/reference/cctype/

#c_str()
La fonction membre c_str() est à utiliser pour raison de compatibilité avec du code qui ne prend en charge que les vieilles chaines de caractères du C (et c'est sa seule raison d'être).
Maintenant on n'a plus de char * mais des objets de type string, et c_str() premet de récupérer le char* contenue dans un objet de type string.

#Méthodes statiques
Pour les utiliser, pas besoin de créer un objet. Il suffit de faire précéder le nom de la méthode du nom de la classe suivi d'un double deux-points.
Une méthode statique ne peut pas accéder aux attributs de la classe. C'est vraiment une bête fonction mais rangée dans une classe. Cela permet de regrouper les fonctions dans des classes, par thème, et aussi d'éviter des conflits de nom.

#Attributs statiques
Tout comme les méthodes statiques, les attributs statiques appartiennent à la classe et non aux objets créés à partir de la classe. Initialisation en dehors du .hpp, dans l'espace global, c'est-à-dire en dehors de toute classe ou fonction, en dehors du main()notamment. Un attribut déclaré comme statique se comporte comme une variable globale, c'est-à-dire une variable accessible partout dans le code.

#Virtual Inheritance
https://www.cprogramming.com/tutorial/virtual_inheritance.html

Ressources : 
- https://www.youtube.com/watch?v=Rub-JsjMhWY
- https://openclassrooms.com/en/courses/1894236-programmez-avec-le-langage-c
- https://zestedesavoir.com/tutoriels/822/la-programmation-en-c-moderne/ 