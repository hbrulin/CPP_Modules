#ifndef ENEMY_HPP
#define ENEMY_HPP

#include "iostream"
#include "string"

class Enemy {
    private:
    Enemy();

    protected:
    int _HP;
    std::string _type;

    public:

    Enemy(int hp, std::string const & type); 
    virtual ~Enemy();
    Enemy(Enemy const &tocopy);
    Enemy &operator=(const Enemy &tocopy);
    std::string const getType() const;
    int getHP() const;
    virtual void takeDamage(int);
};

#endif