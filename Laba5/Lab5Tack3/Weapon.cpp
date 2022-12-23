#include "Weapon.h"
#include "MagicWeapon.h"
#include <iostream>
using namespace std;

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
    damage = 6;
    weaponType = 1;
}


string Weapon::get_name()
{
    return this->name;
}

int Weapon::get_weight()
{
    return this->weight;
}

int Weapon::get_damage()
{
    return this->damage;
}

int Weapon::get_weaponType()
{
    return this->weaponType;
}