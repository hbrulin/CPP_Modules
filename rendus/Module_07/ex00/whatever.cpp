#include <iostream>
#include <string>
#include "Awesome.hpp"

template<typename T>
T &max(T& a, T& b)
{
   if(a>b)
      return a;
   else
      return b;
}

template<typename T>
T &min(T& a, T& b)
{
   if(a<b)
      return a;
   else
      return b;
}

template<typename T>
void	swap(T& a, T& b)
{
   T tmp;
   tmp = a;
   a = b;
   b = tmp;
}

int main( void ) 
{ 
	int a = 2;
	int b = 3;
	swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << max( c, d ) << std::endl;

	Awesome e(5);
	Awesome f(7);
	swap(e, f);
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << min( e, f ) << std::endl;
	std::cout << "max( e, f ) = " << max( e, f ) << std::endl;

	return 0; 
}