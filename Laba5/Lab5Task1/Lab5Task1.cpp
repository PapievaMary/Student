#include <iostream>
#include "Weapon.h"
#include"MagicWeapon.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    struct Player
    {
        int id;
        string login;
        string password;
        void Output()
        {
            cout << "ID: " << id << endl;
            cout << "Логин: " << login << endl;
            cout << "Пароль: " << password << endl;
        }
    };

    Weapon Or1("Оружие1", 6, 10, 2);
    if (Or1.get_weaponType() == (int)EnWeapon::ONEHANDED)
        cout << "Одноручное оружие" << endl;
    else if (Or1.get_weaponType() == (int)EnWeapon::TWOHANDED)
        cout << "Двуручное оружие" << endl;
    else if (Or1.get_weaponType() == (int)EnWeapon::BOW)
        cout << "Лук" << endl;
    else if (Or1.get_weaponType() == (int)EnWeapon::CROSSBOW)
        cout << "Арбалет" << endl;

    cout << endl;
    Player player = { 1, "Mary112", "880886889" };
    player.Output();

    cout << endl;
    MagicWeapon MStaff("Magic staff", 3, 6, 0, 5);
    cout << MStaff.get_name() << ": " << MStaff.get_weight() << " " 
         << MStaff.get_damage() << " " << MStaff.get_weaponType() << " "
         << MStaff.get_extradamage() << endl;
}