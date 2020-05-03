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
    ISquad* vlc1 = new Squad;
    vlc1->push(bob1);
    vlc1->push(jim1);
	ISquad* vlc2 = new Squad(*vlc1);
	std::cout << std::endl;
	for (int i = 0; i < vlc2->getCount(); ++i) 
    {
        ISpaceMarine* cur = vlc2->getUnit(i); 
        cur->battleCry(); 
        cur->rangedAttack(); 
        cur->meleeAttack();
    }
	std::cout << std::endl;
	delete vlc1;
	delete vlc2;
	
	std::cout << std::endl;
	std::cout << "*** Operateur affectation ***" << std::endl;
	ISpaceMarine* joe = new TacticalMarine;
    ISpaceMarine* jack = new AssaultTerminator;
	ISpaceMarine* jeff = new AssaultTerminator;
    Squad squad;
    squad.push(joe);
    squad.push(jack);
	Squad squad2;
	squad2.push(jeff);
	squad2 = squad;
	std::cout << std::endl;
	for (int i = 0; i < squad2.getCount(); ++i) 
    {
        ISpaceMarine* cur = squad2.getUnit(i); 
        cur->battleCry(); 
        cur->rangedAttack(); 
        cur->meleeAttack();
    }
    return 0; 
}