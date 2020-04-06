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
    return 0; 
}