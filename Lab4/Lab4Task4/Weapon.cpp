#include "Weapon.h"

Weapon::Weapon(string name, int weight, int damage, int maxWeight)
{
    this->name = name;
    this->weight = weight;
    this->damage = damage;
    this->maxWeight = maxWeight;
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

int Weapon::get_weight()
{
    return this->weight;
}

string Weapon::get_name()
{
    return this->name;
}

int Weapon::get_damage()
{
    return this->damage;
}

int Weapon::get_maxWeight()
{
    return this->maxWeight;
}

void Weapon::setDamage(int setdamage)
{
    this->damage = setdamage;
}


int Charasteristics::get_strenght()
{
    return this->strength;
}

void Charasteristics::set_strenght(int strength)
{
    this->strength = strength;
}

Charasteristics::Charasteristics(int strength)
{
    this->strength = strength;
}

double MyMath::Add(double x1, double x2)
{
    x >= 0 ? x++ : x = 0;
    return x1 + x2;
}

double MyMath::Sub(double x1, double x2)
{
    x >= 0 ? x++ : x = 0;
    return x1 - x2;
}

double MyMath::Mult(double x1, double x2)
{
    x >= 0 ? x++ : x = 0;
    return x1 * x2;
}

double MyMath::Div(double x1, double x2)
{
    x >= 0 ? x++ : x = 0;
    return x1 / x2;
}