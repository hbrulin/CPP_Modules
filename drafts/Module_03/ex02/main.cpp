#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
    FragTrap voldemort("Voldemort");
    ScavTrap harry("Harry Potter");
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
    harry.challengeNewcomer("Voldemort");
    harry.challengeNewcomer("Voldemort");
    
    return 0;
}