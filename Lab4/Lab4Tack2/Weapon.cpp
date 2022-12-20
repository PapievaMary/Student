#include "Weapon.h"

Weapon::Weapon(string name, int weight, int damage, int maxWeight)
{
    this->name = name;
    this->weight = weight;
    this->damage = damage;
    this->maxWeight = maxWeight;
}

Weapon::~Weapon()
{
    cout << this->name << " delete!" << endl;
}

bool Weapon::check(int maxWeight)
{
    if (weight <= maxWeight)
    {
        return true;
    }
    else
    {
        return false;
    }
}


int Weapon::applyWeight(Weapon mas)
{
    return applyWeight(mas.weight);
}
int Weapon::applyWeight(int mas)
{
    return this->weight + mas;
}