header <algorithm>

- generate : Il appelle un foncteur/ptr sur ft sur tous les éléments situés entre deux itérateurs. 
-> évite d'utliser une boucle
-> utilisable sur tous les conteneurs.
Il faut quand même que le foncteur corresponde au type contenu. On ne peut bien sûr pas utiliser un foncteur manipulant des
string sur une dequede nombres à virgule. 

- count : Pour compter le nombre d'éléments égaux à une valeur donnée : 
```c
int nombre = count(tab.begin(), tab.end(), 2);
```

- count_if() : pareil que count mais le troisième arg n'est pas une valeur mais un prédicat.

- find()oufind_if(). Ils s'utilisent exactement comme les algorithmes de comptage, la seule différence est leur type de retour : ils renvoient un itérateur sur l'élément trouvé ou sur end()si l'objet cherché n'a pas été trouvé.

- min_element()et max_element() cherchent l'élément le plus petit ou le plus grand.

- sort() : trie dans l'ordre croissant.
La fonction sort()ne peut être utilisée qu'avec des conteneurs proposant des random access iterators, c'est-à-dire les vectoret les deque uniquement. De toute façon, trier une mapa peu de sens puisque ces conteneurs stockent directement leurs éléments dans le bon ordre.
Par défaut, la fonction sort()utilise l'opérateur '<' pour comparer les éléments avant de les trier. Mais il existe également une autre version de cette fonction qui prend un troisième argument : un foncteur comparant deux éléments. Si l'on souhaite créer un tri spécifique, on doit fournir un foncteur expliquant à sort()comment trier. - on peut aussi faire cela pour changer la méthode de tri d'une table associative. 

- for_each() : applique foncteur Afficher sur tous les éléments du tab.
```c
for_each(tab.begin(), tab.end(), Afficher());
```
Attention : La fonction for_eachreçoit une copie du foncteur en argument et pas une référence. Donc si la classe foncteur a des attributs, ceux-ci ne seront pas modifiés : la fonction for_each()renvoie le foncteur qu'elle a utilisé une fois qu'elle a terminé.
```c
somme = for_each(tab.begin(), tab.end(), somme);   
```

- transform() : permet de traiter deux conteneurs à la fois. Imaginons que nous voulions calculer la somme des éléments de deux tableaux et stocker le résultat dans un troisième vector. Pour cela, il va nous falloir un foncteur qui effectue l'addition. Mais cela, on l'a déjà vu, existe dans l'en-tête functional. Pour le reste, il nous faut parcourir en parallèle deux tableaux et écrire les résultats dans un troisième. C'est ce que fait la fonction transform(). Elle prend cinq arguments : le début et la fin du premier tableau, le début du deuxième, le début de celui où seront stockés les résultats et bien sûr le foncteur.