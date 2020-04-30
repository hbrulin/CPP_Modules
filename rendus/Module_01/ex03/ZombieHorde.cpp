# include "Zombie.hpp"
# include "ZombieHorde.hpp"

const std::string NAMES[] = {
    "John", "Jack", "Jerry", "Jeremy", "Jessica",
    "James Dean", "July", "Steven", "Carrot", 
    "Cauliflower",
    };

std::string getRandomName()
{
    return (NAMES[rand() % 10]);
}

ZombieHorde::ZombieHorde(int n)
{
    m_nb = n;
    m_zombie = new Zombie[n];
    for (int i = 0; i < n; i++)
		m_zombie[i] = Zombie(getRandomName(), "Horde du contrevent");
}

ZombieHorde::~ZombieHorde()
{
    delete[] m_zombie;
}

void ZombieHorde::announce() const
{
    for (int i = 0; i < m_nb; i++)
		m_zombie[i].announce();
}