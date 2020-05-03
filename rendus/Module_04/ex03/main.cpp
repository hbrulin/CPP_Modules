#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"


int main() 
{
    IMateriaSource* src = new MateriaSource(); 
    src->learnMateria(new Ice()); 
    src->learnMateria(new Cure());
    ICharacter* moi = new Character("moi");
    AMateria* tmp;
    tmp = src->createMateria("ice"); 
    moi->equip(tmp);
    tmp = src->createMateria("cure"); 
    moi->equip(tmp);
    ICharacter* bob = new Character("bob");
    moi->use(0, *bob); 
    moi->use(1, *bob);
    delete bob;
    delete moi;
    delete src;

	std::cout << std::endl;
	std::cout << "*** XP increase material ***" << std::endl;
	IMateriaSource* source = new MateriaSource(); 
    source->learnMateria(new Ice()); 
    source->learnMateria(new Cure());
    Character* me = new Character("moi");
    AMateria* temp;
    temp = source->createMateria("ice"); 
    me->equip(temp);
    temp = source->createMateria("cure"); 
    me->equip(temp);
    Character* bill = new Character("bill");
    me->use(0, *bill); 
    me->use(1, *bill);
	std::cout << temp->getXP() << std::endl;
	std::cout << std::endl;

	std::cout << "*** Unequip ***" << std::endl;
	me->unequip(1);
	me->use(1, *bill);
	std::cout << std::endl;

	std::cout << "*** Deep copy constructor ***" << std::endl;
	Character* me2 = new Character(*me);
	me2->use(0, *bill);  

    delete me;
	delete me2;
	delete source;
	std::cout << std::endl;

	std::cout << "*** Affectation operator ***" << std::endl;
	Character me3("me3");
	IMateriaSource* mine = new MateriaSource(); 
    mine->learnMateria(new Ice()); 
    AMateria* type;
    type = mine->createMateria("ice"); 
	me3.equip(type);
	Character me4("me3");
	me4 = me3;
	me3.use(0, *bill);
	me4.use(0, *bill);

	delete bill;
	
    return 0; 
}