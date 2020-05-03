#include "Human.hpp"

int main(void)
{
	Human human;

	human.action("meleeAttack", "Bernard");
	human.action("rangedAttack", "Xavier");
	human.action("intimidatingShout", "Theodore");
	human.action("bullshit", "Personne");
	return 0;
}