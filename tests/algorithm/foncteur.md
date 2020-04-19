Appliquer une fonction sur tous les éléments d'un conteneur : on peut le faire avec ptr sur ft.
Ou avec foncteur. 

Les foncteurs sont des objets possédant une surcharge de l'opérateur(). Ils peuvent ainsi agir comme une fonction mais être passés en argument à une méthode ou à une autre fonction.

Un foncteur est une classe possédant si nécessaire des attributs et des méthodes. Mais, en plus de cela, elle doit proposer un opérateur()qui effectue l'opération que l'on souhaite.

Prédicats : Ce sont des foncteurs prenant un seul argument et renvoyant un booléen. Ils servent à tester une propriété particulière de l'objet passé en argument. Utile pour supprimer des objets qui vérifient une certaine propriété.

foncteurs pré-définis : dans le header functionnal
```c
#include <functional>    //Ne pas oublier !
int main()
{
    plus<int> foncteur;    //On déclare le foncteur additionnant deux entiers
    int a(2), b(3);
    cout << a << " + " << b << " = " << foncteur(a,b) << endl; //On utilise le foncteur comme s'il s'agissait d'une fonction
    return 0;
}
```