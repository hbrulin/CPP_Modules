template <typename T>
class Rectangle {
 
	public:
		T hauteur() const;
		Rectangle(T gauche, T droite, T haut, T bas); //constructeur

	private:
		T m_gauche;
		T m_droite;
		T m_haut;
		T m_bas;

};

template<typename T>
Rectangle<T>::Rectangle(T gauche, T droite, T haut, T bas) :m_gauche(gauche), //ne pas oublier <T>, utilisation du typte template dans nom classe
    m_droite(droite), m_haut(haut), m_bas(bas) {
}

template<typename T>
T Rectangle<T>::hauteur() const
{
   return m_haut-m_bas;
}

int main()
{
   Rectangle<double> monRectangle(1.0, 4.5, 3.1, 5.2); //creation de l'objet de classe template, avec des doubles en attributs

   cout << monRectangle.hauteur() << endl;
  
   return 0;
}