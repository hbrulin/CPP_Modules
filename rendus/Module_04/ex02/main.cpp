#include "AssaultTerminator.hpp"
#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"


int main()
{
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;
    ISquad* vlc = new Squad;
    vlc->push(bob);
    vlc->push(jim);
    for (int i = 0; i < vlc->getCount(); ++i) 
    {
        ISpaceMarine* cur = vlc->getUnit(i); 
        cur->battleCry(); 
        cur->rangedAttack(); 
        cur->meleeAttack();
    }
    delete vlc;

	std::cout << std::endl;
	std::cout << "*** Copy assignation ***" << std::endl;
	ISpaceMarine* bob1 = new TacticalMarine;
    ISpaceMarine* jim1 = new AssaultTerminator;
	ISpaceMarine* jeff = new AssaultTerminator;
    ISquad* vlc1 = new Squad;
    vlc1->push(bob1);
    vlc1->push(jim1);
	ISquad* vlc2 = new Squad(*vlc1);
	ISquad *vlc3 = new Squad;
	vlc3->push(jeff);
	vlc3 = vlc1;
	std::cout << std::endl;
	for (int i = 0; i < vlc2->getCount(); ++i) 
    {
        ISpaceMarine* cur = vlc2->getUnit(i); 
        cur->battleCry(); 
        cur->rangedAttack(); 
        cur->meleeAttack();
    }
	std::cout << std::endl;
	for (int i = 0; i < vlc3->getCount(); ++i) 
    {
        ISpaceMarine* cur = vlc3->getUnit(i); 
        cur->battleCry(); 
        cur->rangedAttack(); 
        cur->meleeAttack();
    }
	std::cout << std::endl;
	delete vlc1;
	delete vlc2;
	delete vlc3;

    return 0; 
}