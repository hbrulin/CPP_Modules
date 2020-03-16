#include <iostream> //les en-tete standard n'ont plus besoin d'être appelees avec .h
#include <string> 
using namespace std; //std::cout not necessary

int main()
{
    string yourName;

    int num = 45;
    cout << "Hello world" << endl; //endl = \n
    cout << "Winning number is " << num << endl;
    cout << "Size of int " << sizeof(num) << endl;
    cout << "5 + 2 = " << 5+2 << endl;
    cout << "What is your name?" << endl;
    getline(cin, yourName);
    cout << "hello " << yourName << endl;
    cout << "Size of your name " << yourName.size() << endl;
    cout << "Is string empty " << yourName.empty() << endl;
    cout << yourName.append(" is your name") << endl;
    yourName.erase();
    cout << "where are you " << yourName << endl;
    yourName = "i'm back";
    //yourName.substr(3, 3);
    cout << "hello " << yourName << endl;
    return (0);
}
