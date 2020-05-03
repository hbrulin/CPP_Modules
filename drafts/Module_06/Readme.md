Valeur littérale : Une littérale est par essence une constante, c'est une valeur fixe et immuable:
int i = 2;
-> J'initialise la variable i avec la littérale 2. Je peux changer à volonté la valeur de i (parce que c'est une variable), par contre 2 vaudra toujours 2 

Types scalaires : types atomiques et définis à l'avance dans le langage.

NaN (Not a Number, en français « pas un nombre ») est, en informatique, une valeur ou un symbole produit par le résultat d'une opération arithmétique invalide, quand les nombres sont représentés en virgule flottante. On obtient NaN pour certaines opérations qui sont des indéterminées mathématiques : 0/0, ∞ – ∞, ∞/∞, 0·∞. C'est également le résultat obtenu en langage C entre autres quand on tente de calculer la racine carrée d'un nombre strictement négatif.
NaN est en quelque sorte un élément absorbant. N'importe quoi additionné, multiplié, ou toute fonction mathématique appliquée à NaN donne NaN. Même NaN + ∞ donne NaN, alors que pour tout nombre x, (donc, pas NaN ni –∞), x + ∞ donne +∞. L’opération NaN – NaN donne NaN.


#reinterpret cast
https://en.cppreference.com/w/cpp/language/reinterpret_cast

#dynamic casts
https://www.bogotobogo.com/cplusplus/dynamic_cast.php
Permet de caster un objet en un objet + spécifique (hérité). Si ce n'est pas possible, ça veut dire que pas d'héritage, et donc pas possible de caster. Renvoie null.
Dans ex02, si ça renvoie null, c'est car je ne peux pas caster A en B, ou à en C, ou B en A etc... DOr je pourrais caster A en A, ou Base en A. Donc ça me permet de savoir si un objet appartient à une classe.
Attention : base-to-derived conversions are not allowed with dynamic_cast unless the base class is polymorphic. ->  by adding virtual function.