#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "TeddyBear.hpp"

int main() 
{
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");
    std::cout << robert << jim << joe;
    robert.polymorph(jim); 
	robert.polymorph(joe);

	std::cout << "Additional tests" << std::endl;
	TeddyBear lalala("lalala");
	std::cout << lalala;
	robert.polymorph(lalala);
    return 0; 
}