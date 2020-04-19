#include <deque>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    deque<char> lettres;

    //On remplit la deque… avec generate() par exemple !

    deque<char>::iterator trouve = find(lettres.begin(), lettres.end(), 'a');

    if(trouve == lettres.end())
        cout << "La lettre 'a' n'a pas ete trouvee" << endl;
    else
        cout << "La lettre 'a' a ete trouvee" << endl;

    return 0;
}