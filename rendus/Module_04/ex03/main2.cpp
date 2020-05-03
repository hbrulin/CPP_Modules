#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Stone.hpp"
#include "Water.hpp"
#include "Fire.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"


int main() 
{

	std::cout << "*** Testing Max Inventory ***" << std::endl;

    IMateriaSource* src = new MateriaSource(); 
    src->learnMateria(new Ice()); 
    src->learnMateria(new Cure());
	src->learnMateria(new Stone()); 
    src->learnMateria(new Water());
	src->learnMateria(new Fire());
    ICharacter* moi = new Character("moi");
    AMateria* tmp;
    tmp = src->createMateria("ice"); 
    moi->equip(tmp);
    tmp = src->createMateria("cure"); 
    moi->equip(tmp);
	tmp = src->createMateria("stone"); 
    moi->equip(tmp);
	tmp = src->createMateria("water"); 
    moi->equip(tmp);
	tmp = src->createMateria("fire"); 
    moi->equip(tmp);
    ICharacter* bob = new Character("bob");
    moi->use(0, *bob); 
    moi->use(1, *bob);
	moi->use(2, *bob);
	moi->use(3, *bob);
	moi->use(4, *bob);
    delete bob;
    delete moi;
    delete src;

    return 0; 
}