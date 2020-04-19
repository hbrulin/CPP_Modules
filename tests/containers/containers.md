Conteneurs : Ce sont des objets qui peuvent contenir toute une série d'autres objets et qui proposent des méthodes permettant de les manipuler.

Les différents conteneurs peuvent être partagés en deux catégories selon que les éléments sont classés à la suite les uns des autres ou non. On parle dans un cas de séquences et dans l'autre de conteneurs associatifs.

Séquences :
- vector
- deque
- list
- stack
- queue
- priority_queue
-> push_back() et pop_back() sont utilisés pour toutes les séquences

Conteneurs associatifs :
- set
- multiset
- map
- multimap


#Méthodes
Il y a des méthodes communes à tous les conteneurs :
- .size()
- empty() : renvoie true si conteneur vide
- clear() : vide le conteneur
- swap(): échange contenu de deux conteneurs de même type : a.swap(b);
Attention : vector<int> et vector<double> sont des types différents. On ne peut donc pas échanger le contenu de deux conteneurs dont les éléments sont de types différents.

#Vectors : Les vectors sont des tableaux dynamiques. Autrement dit, les éléments qu'ils contiennent sont stockés les uns à coté des autres dans la mémoire. Pas pratique pour ajouter/supprimer un élément au milieu. Notamment si on veut trier.
En plus de push_back et pop_back, il existe deux méthodes permettant d'accéder au premier et au dernier élément d'un vectorou de toute autre séquence. Il s'agit des méthodes front()et back(). 
Méthode : assign() -> permettant de remplir tous les éléments d'une séquence avec la même valeur.
En plus des crochets, il est possible d'accéder aux éléments d'unvector en utilisant des itérateurs.

#deque (double ended queue)
C'est un tableau auquel on peut ajouter des éléments aux deux extrémités.
-> méthodes push_front()et pop_front().

#stack
C'est un conteneur qui n'autorise l'accès qu'au dernier élément ajouté.
3 opérations autorisées :
- Ajouter un élément 
- Consulter le dernier élément ajouté ;
- Supprimer le dernier élément ajouté.
-> Cela se fait via les trois méthodes push(),top()etpop().
-> structure LIFO (Last In First Out).

#queue
structure FIFO (First In First Out). On ne peut accéder qu'au premier élément ajouté.
Le fonctionnement est analogue à celui des stacks. La seule différence est qu'on utilise front()pour accéder à ce qui se trouve à l'avant de la file au lieu de top().

#priority_queue
Les priority_queues sont des queues qui ordonnent leurs éléments. C'est le plus grand qui est accesible (ou ce qui est défini selon le surchargement de l'opérateur de comparaison < entre deux objets).
```c
int main()
{
    priority_queue<int> file;
    file.push(5);
    file.push(8);
    file.push(3);

    cout << file.top() << endl;  //Affiche le plus grand des éléments insérés (le nombre 8)

    return 0;
}
````
Les méthodes sont exactement les mêmes que pour les stacks.
Attention : Les objets stockés dans une priority_queue doivent avoir un opérateur de comparaison (<) surchargé afin de pouvoir être classés !
On utilise par exemple ce genre de structure pour gérer des évènements selon leur priorité. 

#Séquences vs tables associatives
Dans un vectorou une deque, les éléments sont accessibles par des [] via leur index, un nombre entier positif. 
Pas tjrs pratique, si on a un dictionnaire par ex.
Les tables associatives sont des structures de données qui autorisent l emploi de n importe quel type comme index.

#Maps
Une map est une table associative permettant de stocker des paires clé-valeur.

Cela veut dire que vous pouvez créer un conteneur où, par exemple, les indices sont des string. Comme le type des indices peut varier, il faut l indiquer lors de la déclaration de l objet :
```c
map<string, int> a;
```
Ce code déclare une table associative qui stocke des entiers mais dont les indices sont des chaînes de caractères. On peut alors accéder à un élément via les crochets[]comme ceci :
```c
a["salut"] = 3; //La case "salut" de la map vaut maintenant 3
```
Si la case n'existe pas, elle est automatiquement créée.
On peut utiliser ce que l'on veut comme clé. La seule condition est que l'objet utilisé possède un opérateur de comparaison « plus-petit-que » (<).

Lesmapont un autre gros point fort : les éléments sont triés selon leur clé. Donc si l'on parcourt unemapdu début à la fin, on parcourt les clés de la plus petite à la plus grande. 
Attenion : pour parcourir une table associative du début à la fin, il faut utiliser les itérateurs.

Important : La map utilise l'opérateur '<' de la classe string pour trier ses éléments.

#Autres tables associatives :
Variations de la map.
- Les sets sont utilisés pour représenter les ensembles. On peut insérer des objets dans l'ensemble et y accéder via une méthode de recherche. Par contre, il n'est pas possible d'y accéder via les crochets. En fait, c'est comme si on avait une map où les clés et les éléments étaient confondus.
- Les multiset et multimap sont des copies des set et map où chaque clé peut exister en plusieurs exemplaires - doublons autorisés.

#lists
Les éléments ne sont pas rangés les uns à côté des autres dans la mémoire. Chaque « case » contient un élément et un pointeur sur la case suivante, située ailleurs dans la mémoire.
L'avantage de cette structure de données est que l'on peut facilement ajouter des éléments au milieu. Il n'est pas nécessaire de décaler toute la suite comme dans l'exemple de la bibliothèque du chapitre précédent. Mais (il y a toujours un mais) on ne peut pas directement accéder à une case donnée… tout simplement parce qu'on ne sait pas où elle se trouve dans la mémoire. On est obligé de suivre toute la chaîne des éléments. Pour aller à la huitième case, il faut aller à la première case, suivre le pointeur jusqu'à la deuxième, suivre le pointeur jusqu'à la troisième et ainsi de suite jusqu'à la huitième. C'est donc très coûteux.