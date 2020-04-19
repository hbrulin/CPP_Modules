class ComparaisonLongueur
{
public:
    bool operator()(const string& a, const string& b)
    {
        return a.length() < b.length();
    }
};

int main()
{
    vector<string> tableau;

    //… On remplit le tableau en lisant un fichier par exemple.

    sort(tableau.begin(), tableau.end(), ComparaisonLongueur());

    //Le tableau est maintenant trié par longueur de chaîne

    return 0;
}