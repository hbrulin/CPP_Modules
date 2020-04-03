#include "Human.hpp"
#include "iostream"

void Human::meleeAttack(std::string const &target)
{
	std::cout << "Melee attack on " << target << std::endl;
}

void Human::rangedAttack(std::string const &target)
{
	std::cout << "Ranged attack on " << target << std::endl;
}

void Human::intimidatingShout(std::string const &target)
{
	std::cout << "Intimidating " << target << std::endl;
}

void Human::action(std::string const &action_name, std::string const &target)
{
	int key;
	void (Human::* const actions[3])(std::string const &target) = {
		&Human::meleeAttack,
		&Human::rangedAttack,
		&Human::intimidatingShout
	};

	key = ("meleeAttack" == action_name) ? 0 :
		("rangedAttack" == action_name) ? 1 :
		("intimidatingShout" == action_name) ? 2 : 3;
    if (key >= 0 && key < 3)
	    (this->*actions[key])(target);
    else 
        std::cout << "Invalid action." << std::endl;
}