Conteneurs : Ce sont des objets qui peuvent contenir toute une série d'autres objets et qui proposent des méthodes permettant de les manipuler.

Les différents conteneurs peuvent être partagés en deux catégories selon que les éléments sont classés à la suite les uns des autres ou non. On parle dans un cas de séquences et dans l'autre de conteneurs associatifs.

Séquences :
- vector
- deque
- list
- stack
- queue
- priority_queue

Conteneurs associatifs :
- set
- multiset
- map
- multimap

#Vectors : Les vectors sont des tableaux dynamiques. Autrement dit, les éléments qu'ils contiennent sont stockés les uns à coté des autres dans la mémoire. Pas pratique pour ajouter/supprimer un élément au milieu. Notamment si on veut trier.

#Méthodes
Il y a des méthodes communes à tous les conteneurs :
- .size()
- empty() : renvoie true si conteneur vide
- clear() : vide le conteneur
- swap(): échange contenu de deux conteneurs de même type : a.swap(b);

