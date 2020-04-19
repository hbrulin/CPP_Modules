#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main()
{
    vector<double> a(50, 0.);    //Trois tableaux de 50 nombres à virgule
    vector<double> b(50, 0.);
    vector<double> c(50, 0.);
   
    //Remplissage des vectors 'a' et 'b'….

    transform(a.begin(), a.end(), b.begin(), c.begin(), plus<double>());

    //À partir d'ici les cases de 'c' contiennent la somme des cases de 'a' et 'b'

    return 0;
}