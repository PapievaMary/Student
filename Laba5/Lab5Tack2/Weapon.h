#pragma once
#include <iostream>
using namespace std;

enum class EnWeapon
{
    ONEHANDED = 0,
    TWOHANDED = 1,
    BOW = 2,
    CROSSBOW = 3
};

class Weapon
{
    friend class MagicWeapon;
private:
    string name;
    int weight;
    int damage;
    int weaponType;
public:
    virtual int getVcedamage();

    Weapon(string name, int weight, int damage, int weaponType);

    Weapon();

    string get_name();
    int get_weight();
    int get_damage();
    int get_weaponType();

    void setDamage(int setdamage);

    friend class Charasteristics;
};