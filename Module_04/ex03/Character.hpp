#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter {

    private:
    Character();
    
    protected:
    std::string _name;
    AMateria **inventory;
    int _count;

    public:
    Character(std::string name);
    Character(Character const &tocopy);
	Character &operator=(Character const &tocopy);
    ~Character() {}
    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);

};

#endif