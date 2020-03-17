#ifndef DEF_GUN
#define DEF_GUN

#include <iostream>
#include <string>

class Gun
{
    public:

    Gun();
    Gun(std::string name, int damage);
    void change(std::string name, int damage);
    void print() const;
    int getDamage()const;

    private:
    std::string m_name;
    int m_damage;
};

#endif