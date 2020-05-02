# include "Squad.hpp"

Squad::Squad() : count(0), units(NULL) {

}

Squad::Squad(ISquad const &tocopy) {
	this->count = 0;
	for (int i = 0; i < tocopy.getCount(); i++)
		this->push(tocopy.getUnit(i)->clone());
}

Squad &Squad::operator=(Squad const &tocopy) {
	if (this->units)
	{
		for (int i = 0; i < this->count; i++)
			delete this->units[i];
		delete this->units;
		this->units = NULL;
	}
	this->count = tocopy.count;
    this->units = new ISpaceMarine*[this->count];
    for (int i = 0; i < this->count; i++)
        this->units[i] = tocopy.units[i]->clone();
    return *this;
}

Squad::~Squad() {
    if (this->units)
	{
		for (int i = 0; i < this->count; i++)
			delete this->units[i];
		delete this->units;
	}
}

int Squad::getCount(void) const {
    return (this->count);
}

ISpaceMarine *Squad::getUnit(int index) const {
    if (this->count == 0 || index < 0 || index >= count)
		return (NULL);
	return (this->units[index]);
}

int Squad::push(ISpaceMarine *unit) {
    if (!unit)
		return (this->count);
	if (this->units)
	{
		for (int i = 0; i < this->count; i++)
		/* Unique units */
			if (this->units[i] == unit)
				return (this->count);
		this->units[this->count] = unit;
		this->count++;
        return this->count;
	}
	else
	{
		/* 1st push */
		this->units = new ISpaceMarine*[1];
		this->units[0] = unit;
		this->count = 1;
	}
	return (this->count);
}