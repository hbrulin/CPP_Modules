#include<deque>
#include <iostream>
using namespace std;

int main()
{
    deque<int> d(5,6);        //Une deque de 5 éléments valant 6
    deque<int>::iterator it;  //Un itérateur sur une deque d'entiers

    //Et on itère sur la deque
    for(it = d.begin(); it!=d.end(); ++it)
    {
        cout << *it << endl;    //On accède à l'élément pointé via l'étoile
    }
    return 0;
}