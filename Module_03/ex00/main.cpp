#include "FragTrap.hpp"

int main(void) {
    FragTrap voldemort("Voldemort");
    voldemort.display();
    voldemort.beRepaired(10);
    voldemort.display();
    voldemort.takeDamage(90);
    voldemort.display();
    voldemort.takeDamage(30);
    voldemort.display();

    voldemort.vaulthunter_dot_exe("Harry Potter");
    voldemort.vaulthunter_dot_exe("Harry Potter");
    voldemort.vaulthunter_dot_exe("Harry Potter");
    voldemort.vaulthunter_dot_exe("Harry Potter");
    voldemort.vaulthunter_dot_exe("Harry Potter");
    voldemort.vaulthunter_dot_exe("Harry Potter");
}