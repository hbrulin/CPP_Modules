template <>
string maximum<string>(const string& a, const string& b)
{
  if(a.size()>b.size())
    return a;
  else
    return b;
}

int main()
{
  cout << "Le plus grand est: " << maximum<std::string>("elephant","souris") << endl;

  return 0;
}

/*l'opérateur<pour les chaînes de caractères compare suivant l'ordre lexicographique. Si on veut comparer longueur, utilisation 
la spécialisation avec template <> 
Pour pouvoir compiler et avoir le comportement voulu, votre programme devra être organisé d'une manière spéciale. 
Il faut respecter un ordre particulier :
- la fonction générique ;
- les fonctions spécialisées.
Lors de la compilation, le compilateur cherche une fonction spécialisée. 
S'il n'en trouve pas, alors il utilise la fonction générique déclarée au-dessus.*/