#include "gun.hpp"
using namespace std;

Gun::Gun() : m_name("Smith and Wesson"), m_damage(20)
{

}

Gun::Gun(string name, int damage) : m_name(name), m_damage(damage)
{

}

void Gun::change(string name, int damage)
{
    m_name = name;
    m_damage = damage;
}

void Gun::print()const
{
    cout << "Gun : " << m_name << " Damage : " << m_damage << endl;
}

int Gun::getDamage() const
{
    return (m_damage);
}