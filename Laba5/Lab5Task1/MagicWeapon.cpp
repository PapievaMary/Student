#include "MagicWeapon.h"
#include "Weapon.h"
#include <iostream>
using namespace std;

MagicWeapon::MagicWeapon(string name, int weight, int damage, int weaponType, int extradamage) :
	Weapon(name, weight, damage, weaponType)
{
	this->extradamage = extradamage;
}

MagicWeapon::MagicWeapon() :Weapon()
{
	extradamage = 1;
}

int MagicWeapon::get_extradamage()
{
	return this->extradamage;
}