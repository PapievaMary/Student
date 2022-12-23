#include <iostream>
#include"Weapon.h"
#include"MagicWeapon.h"
#include"OWeapon.h"
#include "HandWeapon.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    MagicWeapon mw("none", 3, 6, 0, 20);
    mw.Attack();

    OWeapon dw;
    dw.Attack();
    dw.Attack();

    int x=9, y;
    OWeapon ow;
    Hold <OWeapon, int> hold(ow, x);
    hold.getLeftHandWeapon().Attack();
    cout << hold.getRightHandWeapon() << endl;
}