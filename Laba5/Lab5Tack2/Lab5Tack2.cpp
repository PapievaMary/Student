#include <iostream>
#include "Weapon.h"
#include"MagicWeapon.h"
using namespace std;

bool operator > (Weapon w1, Weapon w2) 
{return w1.getVcedamage() > w2.getVcedamage();}
bool operator > (Weapon w1, MagicWeapon w2)
{return w1.getVcedamage() > w2.getVcedamage();}
bool operator > (MagicWeapon w1, Weapon w2)
{return w1.getVcedamage() > w2.getVcedamage();}
bool operator > (MagicWeapon w1, MagicWeapon w2)
{return w1.getVcedamage() > w2.getVcedamage();}

bool operator < (Weapon w1, Weapon w2) 
{return w1.getVcedamage() < w2.getVcedamage();}
bool operator < (Weapon w1, MagicWeapon w2)
{return w1.getVcedamage() < w2.getVcedamage();}
bool operator < (MagicWeapon w1, Weapon w2)
{return w1.getVcedamage() < w2.getVcedamage();}
bool operator < (MagicWeapon w1, MagicWeapon w2)
{return w1.getVcedamage() < w2.getVcedamage();}

int main()
{
    setlocale(LC_ALL, "");

    Weapon Or1("Оружие1", 6, 8, 3);
    cout << Or1.get_name() << ": " << Or1.get_weight()<< " "
        << Or1.get_damage() << " " << Or1.get_weaponType() << endl;
    if (Or1.get_weaponType() == (int)EnWeapon::ONEHANDED)
        cout << "Одноручное оружие" << endl;
    else if (Or1.get_weaponType() == (int)EnWeapon::TWOHANDED)
        cout << "Двуручное оружие" << endl;
    else if (Or1.get_weaponType() == (int)EnWeapon::BOW)
        cout << "Лук" << endl;
    else if (Or1.get_weaponType() == (int)EnWeapon::CROSSBOW)
        cout << "Арбалет" << endl;
    cout << "Весь урон от Оружие1: " << Or1.getVcedamage() << endl;

    cout << endl;
    MagicWeapon MStaff("Magic staff", 3, 6, 0, 5);
    cout << MStaff.get_name() << ": " << MStaff.get_weight() << " "
        << MStaff.get_damage() << " " << MStaff.get_weaponType() << " "
        << MStaff.get_extradamage() << endl;
    cout << "Весь урон от Magic staff: "<< MStaff.getVcedamage() << endl;

    Weapon Or2("Оружие2", 3, 10, 1);
    MagicWeapon MBomb("Magic bomb", 3, 5, 0, 9);
    cout << (MStaff < Or1)<< endl;//11<8  =0
    cout << (Or1 > Or2) << endl;//8>10    =0
    cout << (Or2 < MBomb) << endl;//10<14 =1
    cout << (MStaff > Or2) << endl;//11>10=1
}
