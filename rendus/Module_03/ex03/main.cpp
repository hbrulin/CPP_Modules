#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void) {
    FragTrap voldemort("Voldemort");
    ScavTrap harry("Harry Potter");
    NinjaTrap umbridge("Dolores Umbridge");
    voldemort.display();
    voldemort.takeDamage(90);
    voldemort.display();

    voldemort.rangedAttack("Harry Potter");
    voldemort.vaulthunter_dot_exe("Harry Potter");

    harry.takeDamage(30);
    harry.beRepaired(30);
    harry.display();
    harry.challengeNewcomer("Voldemort");
    harry.challengeNewcomer("Voldemort");

	ClapTrap snape("Severus Snape");
    umbridge.ninjaShoeBox(harry);
    umbridge.ninjaShoeBox(voldemort);
	umbridge.ninjaShoeBox(umbridge);
	umbridge.ninjaShoeBox(snape);
    
    return 0;
}