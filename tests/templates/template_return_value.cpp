template<typename T, typename S>
S moyenne(T tableau[], int taille)
{ 
   S somme(0);                //La somme des éléments du tableau
   for(int i(0); i<taille; ++i)
      somme += tableau[i];

   return somme/taille;
}

int main()
{
  int tab[5];
  //Remplissage du tableau

  cout << "Moyenne : " << moyenne<int,double>(tab,5) << endl; //on précise quelle valeur de retour on veut

  return 0;
}