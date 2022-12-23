#pragma once
#include <iostream>
#include "Weapon.h"
using namespace std;

class MagicWeapon : public Weapon
{
private:
	int extradamage;
public:
	MagicWeapon(string name, int weight, int damage, int weaponType, int extradamage);
	MagicWeapon();
	int get_extradamage();
	int get_damage();
	void Attack();
};