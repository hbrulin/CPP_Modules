#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"

class Squad: virtual public ISquad
{
private:
	int count;
	ISpaceMarine **units;

public:
	Squad();
	Squad(ISquad const &tocopy);
	virtual ~Squad();
	Squad &operator=(Squad const &tocopy);

	int getCount(void) const;
	ISpaceMarine *getUnit(int index) const;
	int push(ISpaceMarine *unit);
};

#endif