class Remplir{
public:
    Remplir(int i)
        :m_valeur(i) //le foncteur a un constructeur, pour valeur initiale
    {}

    int operator()()
    {
        ++m_valeur;
        return m_valeur;
    }

private:
    int m_valeur;
};

int main()
{ 
    vector<int> tab(100,0); //Un tableau de 100 cases valant toutes 0

    Remplir f(0);      //le foncteur aura m_valeur à 0 

    for(vector<int>::iterator it=tab.begin(); it!=tab.end(); ++it)
    {
        *it = f(); //On appelle simplement le foncteur sur chacun des éléments du tableau, qui se remplit avec incrémentation de 1 à chaque fois
    }
    
    return 0;
}

