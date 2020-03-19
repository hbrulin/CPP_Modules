#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"

class ZombieHorde
{
	private:

    Zombie *m_zombie;
    int     m_nb;

	public:

    //constructeur surchargé
	ZombieHorde(int n);
    ~ZombieHorde();
	void announce() const;
};

#endif