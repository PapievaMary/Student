#ifndef DISPOSABLE_WEAPON_H_
#define DISPOSABLE_WEAPON_H_
#include <iostream>
#include "Weapon.h"
using namespace std;
class OWeapon :public Weapon
{
	bool WeaponUsed = false;
public:
	void Attack() override {
		if (WeaponUsed) {
			cout << "Оружие уже было использовано" << endl;
		}
		else if (!WeaponUsed) {
			cout << "Атакуем одноразовым оружием" << endl;
			WeaponUsed = true;
		}
	}
};
#endif
