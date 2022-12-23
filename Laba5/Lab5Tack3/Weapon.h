#ifndef WEAPON_H_
#define WEAPON_H_
#include <iostream>
using namespace std;

class Weapon
{
	friend class MagicWeapon;
private:
	string name;
	int weight;
	int damage;
	int weaponType;
public:
	Weapon(string name, int weight, int damage, int weaponType);
	Weapon();
	string get_name();
	int get_weight();
	virtual int get_damage();
	int get_weaponType();
	virtual void Attack() = 0;
};

enum class EnWeapon
{
	ONEHANDED = 0,
	TWOHANDED = 1,
	BOW = 2,
	CROSSBOW = 3
};
#endif  