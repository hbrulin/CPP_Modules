class TestVoyelles
{
public:
    bool operator()(string const& chaine) const
    {
        for(int i(0); i<chaine.size(); ++i)
        {
            switch (chaine[i])   //On teste les lettres une à une
            {
                case 'a':        //Si c'est une voyelle
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                case 'y':
                    return true;  //On renvoie 'true'
                default:
                    break;        //Sinon, on continue
            }
        }
        return false;   //Si on arrive là, c'est qu'il n'y avait pas de  voyelle du tout
    }
};

int main()
{
    vector<string> tableau;

    //… On remplit le tableau en lisant un fichier, par exemple.

    int const compteur = count_if(tableau.begin(), tableau.end(), TestVoyelles()); 

    //… Et on fait quelque chose avec 'compteur'

    return 0;
}