int main()
{
    srand(time(0));

    vector<int> tab(100,-1); //Un tableau de 100 cases                                 

    generate(tab.begin(), tab.end(), Generer()); //On génère les nombres aléatoires        

    sort(tab.begin(), tab.end());                //On trie le tableau

    for(vector<int>::iterator it=tab.begin(); it!=tab.end(); ++it)
        cout << *it << endl;                     //On affiche le tableau trié

    return 0;
}