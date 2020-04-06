# include "Squad.hpp"

Squad::Squad() : count(0), units(NULL) {

}
/*L’assignation par copie d’une Squad doit impliquer une deep copy. 
Si il y avait une unité dans l’escouade avant, elle doit être détruite 
avant d’être remplacée. Chaque unité sera créée avec new().*/
Squad::Squad(Squad const &tocopy) {
    *this = tocopy;
}

Squad &Squad::operator=(Squad const &tocopy) {
    this->count = tocopy.count;
    this->units = new ISpaceMarine*[this->count];
    for (int i = 0; i < this->count; i++)
        this->units[i] = tocopy.units[i]->clone();
    return *this;
}

/*Lorsque qu’une Squad est détruite, chaque unité au sein de l’escouade est détruite aussi, dans l’ordre.*/
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
			if (this->units[i] == unit) //on ajoute pas deux fois la meme unit
				return (this->count);
        this->count++;
		this->units[this->count] = unit;
        return this->count;
	}
	else
	{
		this->units = new ISpaceMarine*[1]; //je cree le tableau si jamais il n'existe pas
		this->units[0] = unit;
		this->count = 1;
	}
	return (this->count);
}