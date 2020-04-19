class Addition{
public:
    
    int operator()(int a, int b)   //La surcharge de l'opérateur ()
    {
        return a+b;
    }
};

int main()
{
    Addition foncteur;
    int a(2), b(3);
    cout << a << " + " << b << " = " << foncteur(a,b) << endl; //On utilise le foncteur comme s'il s'agissait d'une fonction
    return 0;
}
