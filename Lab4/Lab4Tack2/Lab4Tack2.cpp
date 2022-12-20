#include <iostream>
#include "Weapon.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	Weapon pan("pan", 6, 2, 10);
	cout << pan.name << " " << pan.weight << " " << pan.damage << " " << pan.maxWeight << endl;
	
	Weapon* dagger = new Weapon("dagger", 4, 9, 10);
	cout << dagger->name << " " << dagger->weight << " " << dagger->damage << " " << dagger->maxWeight << endl;

	cout << "Если максимально допустимый вес меньше, чем вес оружия, то возвращается 1, а иначе 0 \n";
	cout << "Значение для pan = " << pan.check(pan.maxWeight) << endl;
	
	cout << pan.applyWeight(3) << endl;

	
	delete dagger;
}