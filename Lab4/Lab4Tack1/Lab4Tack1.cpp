#include <iostream>
using namespace std;

class Weapon
{
public:
    string name;
    int weight;
    int damage;

    Weapon(string name, int weight, int damage)
    {
        this->name = name;
        this->weight = weight;
        this->damage = damage;
    }

   int get_weight()
   {
       return this->weight;
   }

   string get_name()
   {
       return this->name;
   }

   int get_damage()
   {
       return this->damage;
   }
};

int main()
{
    Weapon* pan = new Weapon("pan", 6, 2);
    cout << pan->get_name() << " " << pan->get_weight() << " " << pan->get_damage() << endl;
    
    Weapon dagger("dagger",2,5);
   cout << dagger.name << " " << dagger.weight << " " << dagger.damage << endl;
}