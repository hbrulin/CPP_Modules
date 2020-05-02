#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main(void) {
    FragTrap voldemort("Voldemort");
    ScavTrap harry("Harry Potter");
    NinjaTrap umbridge("Dolores Umbridge");
    SuperTrap hermione("HERMIONE THE NINJA");

    hermione.rangedAttack("Voldemort");
    hermione.meleeAttack("Umbridge");
    hermione.vaulthunter_dot_exe("Harry");
    hermione.ninjaShoeBox(voldemort);
    hermione.ninjaShoeBox(harry);
    
    return 0;
}