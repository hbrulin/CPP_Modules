Les itérateurs sont des objets ressemblant aux pointeurs, qui vont nous permettre de parcourir les conteneurs. L'intérêt de ces objets est qu'on les utilise de la même manière quel que soit le conteneur ! Pas besoin de faire de distinction entre les vectors, les maps ou les lists.

On peut déplacer l'itérateur en utilisant les opérateurs++et--, comme on pourrait le faire pour un pointeur. 
En outre, on accède à l'élément pointé (ou itéré) via l'étoile *.

Chaque conteneur possède son propre type d'itérateur mais la manière de les déclarer est toujours la même. 
Il faut un type et un nom.
Pour le type : il faut indiquer le type du conteneur, suivi de l'opérateur::et du mot "iterator".
```c
vector<int> tableau(5,4);     //Un tableau de 5 entiers valant 4
vector<int>::iterator it;     //Un itérateur sur un vector d'entiers
```

#Utilisation : 
Tous les conteneurs possèdent une méthode begin()renvoyant un itérateur sur le premier élément contenu. On peut ainsi faire pointer l'itérateur sur le premier élément. On avance alors dans le conteneur en utilisant l'opérateur++. Il ne nous reste plus qu'à spécifier une condition d'arrêt. On ne veut pas aller en dehors du conteneur. Pour éviter cela, les conteneurs possèdent une méthodeend()renvoyant un itérateur sur la fin du conteneur.
-> En réalité,end()renvoie un itérateur sur un élément en dehors du conteneur. Il faut donc itérer jusqu'àend()exclu.


Pour les vector et les deque, on peut faire aussi bien avec les crochets[]. Mais pour les map et surtout les list,
les itérateurs sont le seul moyen que nous avons de les parcourir.

Même pour les vector ou deque, il existe des méthodes qui nécessitent l'emploi d'itérateurs. Il s'agit en particulier des méthodes insert() et erase() qui, comme leur nom l'indique, permettent d'ajouter ou supprimer un élément au milieu d'un conteneur. Jusqu'à maintenant, vous ne pouviez qu'ajouter des éléments à la fin d'un conteneur, jamais au milieu. La raison en est simple : pour ajouter quelque chose au milieu, il faut indiquer où l'on souhaite insérer l'élément. Et cela, c'est justement le but d'un itérateur.

-> même chose pour tous les types de conteneurs. Si vous avez un itérateur sur un élément, vous pouvez le supprimer via erase()ou ajouter un élément juste après grâce à insert().

Types d'itérateurs :
- bidirectionnels : permettent d'avancer et de reculer sur le conteneur. Cela veut dire que vous pouvez utiliser aussi bien++que--. L'important étant que l'on ne peut avancer que d'un seul élément à la fois
- random access iterator : ces itérateurs proposent en plus de++et--des opérateurs+et-permettant d'avancer de plusieurs éléments d'un coup.
```c
vector<int>::iterator it = tab.begin() + 7; //Un itérateur sur le 8ème élément
```
En plus des vector, ces itérateurs sont ceux utilisés par lesdeque.



Les itérateur bidirectionnels sont très utiles pour les listes où on ne peut pas accéder via index et où il faut suivre de ptr en ptr.

Idem pour les maps, qui utilisent des arbres binaires. Facile d'itérer dessus néanmoins.

Subtilité pour les tables associatives : Chaque élément est en réalité constitué d'une clé et d'une valeur. Un itérateur ne peut pointer que sur une seule chose à la fois.
Les itérateurs pointent en réalité sur des pair. Ce sont des objets avec deux attributs publics appelés first et second. Voir exemple.

<strong>ATTENTION pour [] : 
Les itérateurs sont aussi utiles pour rechercher quelque chose dans une table associative. L'opérateur[]permet d'accéder à un élément donné mais il a un « défaut ». Si l'élément n'existe pas, l'opérateur[]le crée. On ne peut pas l'utiliser pour savoir si un élément donné est déjà présent dans la table ou pas.</strong>
C'est pour palier ce problème que les map proposent une méthode <strong>find()</strong> qui renvoie un itérateur sur l'élément recherché. Si l'élément n'existe pas, elle renvoie simplement end(). Vérifier si une clé existe déjà dans une table est donc très simple.