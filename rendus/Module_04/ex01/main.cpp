#include "AWeapon.hpp"
#include "Enemy.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"


int main() 
{
    Character* moi = new Character("moi"); 

    std::cout << *moi;

    Enemy* b = new RadScorpion();

    AWeapon* pr = new PlasmaRifle(); 
    AWeapon* pf = new PowerFist();

    moi->equip(pr); 
    std::cout << *moi; 
    moi->equip(pf);

    moi->attack(b);
    std::cout << *moi; 
    moi->equip(pr); 
    std::cout << *moi; 
    moi->attack(b); 
    std::cout << *moi;
    moi->attack(b); 
    std::cout << *moi;

	std::cout << std::endl;
	std::cout << "*** Supermutant damage decrease ***" << std::endl;
	Enemy* c = new SuperMutant();
	std::cout << "SuperMutant HP : " << c->getHP() << std::endl;
	std::cout << "Weapon Damage : " << pr->getDamage() << std::endl;
	moi->attack(c);
	std::cout << "SuperMutant HP after attack : " << c->getHP() << std::endl;

	std::cout << std::endl;
	std::cout << "*** recover AP test ***" << std::endl;
	std::cout << *moi;
	moi->recoverAP();
	std::cout << *moi;
	moi->recoverAP();
	moi->recoverAP();
	std::cout << *moi;

	std::cout << std::endl;
	std::cout << "*** Supermutant death from powerrifle: ***" << std::endl;
	moi->equip(pf);
	std::cout << *moi;
	moi->attack(c);
	std::cout << "SuperMutant HP after attack : " << c->getHP() << std::endl;
	moi->attack(c);
	moi->attack(c);
	moi->attack(c);

	std::cout << std::endl;
	std::cout << "*** Unarmed : ***" << std::endl;
	Enemy* d = new SuperMutant();
	moi->equip(NULL);
	std::cout << *moi;
	moi->attack(d);
	moi->attack(d);

	std::cout << std::endl;
	std::cout << "*** Not enough AP : ***" << std::endl;
	moi->equip(pf);
	moi->attack(d);
	moi->attack(d);
	std::cout << *moi;
	moi->attack(d);


    return 0; 
}