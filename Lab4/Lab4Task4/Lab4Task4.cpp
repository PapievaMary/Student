#include <iostream>
#include "Weapon.h"
using namespace std;

int MyMath::x = 0;
int main()
{
	setlocale(LC_ALL, "");
	Weapon pan("pan", 3, 10, 10);
	cout << pan.get_name() << " " << pan.get_weight() << " " << pan.get_damage() << " " << pan.get_maxWeight() << endl;
	cout << "Если максимально допустимый вес меньше, чем вес оружия, то возвращается 1, а иначе 0 \n";
	cout << "Значение для pan = " << pan.check(pan.get_maxWeight()) << endl;
	cout << pan.applyWeight(3) << endl;

	Weapon* dagger = new Weapon("dagger", 4, 9, 10);
	cout << dagger->get_name() << " " << dagger->get_weight() << " " << dagger->get_damage() << " " << dagger->get_maxWeight() << endl;
	delete dagger;
	
	cout << "Сила атаки сковородой = ";
	pan.setDamage(5);
	cout << pan.get_damage() << endl;
	cout << "Сила рук = 10";
	Charasteristics StFist(10);
	cout << "\nСумма сил = ";
	cout << StFist.GetDamage(pan) << endl << endl;

	double x1 = 20;
	double x2 = 10;
	cout << "x1 = " << x1<< endl << "x2 = " << x2 << endl;
	cout << "x1+x2 = " << MyMath::Add(x1, x2) << endl;
	cout << "x1-x2 = " << MyMath::Sub(x1, x2) << endl;
	cout << "x1*x2 = " << MyMath::Mult(x1, x2) << endl;
	cout << "x1/x2 = " << MyMath::Div(x1, x2) << endl;
	cout << "Значение статической переменной = " << MyMath::x << endl;
}