#include <algorithm>
#include <vector>

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
    vector<int> tab(100,0); 

    Remplir f(0);   //foncteur

    generate(tab.begin(), tab.end(), f); //algo
    
    return 0;
}
