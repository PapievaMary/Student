#include "Weapon.h"
#include "MagicWeapon.h"
#include <iostream>
using namespace std;

int Weapon::getVcedamage() { return this->damage; }

Weapon::Weapon(string name, int weight, int damage, int weaponType)
{
    this->name = name;
    this->weight = weight;
    this->damage = damage;
    this->weaponType = weaponType;
}

Weapon::Weapon()
{
    name = "None";
    weight = 1;
    damage = 1;
    weaponType = 1;
}


int Weapon::get_weight()
{
    return this->weight;
}

string Weapon::get_name()
{
    return this->name;
}

int Weapon::get_damage()
{
    return this->damage;
}

int Weapon::get_weaponType()
{
    return this->weaponType;
}

void Weapon::setDamage(int setdamage)
{
    this->damage = setdamage;
}