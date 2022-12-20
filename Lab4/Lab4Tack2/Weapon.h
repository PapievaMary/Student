#pragma once
#include <iostream>
using namespace std;

class Weapon
{
public:
    string name;
    int weight;
    int damage;
    int maxWeight;

    Weapon(string name, int weight, int damage, int maxWeight);

    ~Weapon();

    bool check(int maxWeight);

    int applyWeight(Weapon mas);
    int applyWeight(int mas);
};

