#include <iostream>
#include <vector>
#include <map>
using namespace std;

class Settings
{
private:
	static map<string, int> Map;
public:
	static void Add(string x, int y)
	{
		Map.insert(pair<string, int>(x, y));
	}
	static int Get(string x)
	{
		return Map[x];
	}
	static void Print()
	{
		for (auto i = Map.begin(); i != Map.end(); i++) {
			cout << i->first << "=" << i->second << "\n";
		}
		cout << "\n--------------\n";
	}
};

void print(vector<float> v) {
	for (float n : v) cout << n << " ";
	cout << "\n--------------\n";
}

int main()
{
	setlocale(LC_ALL, "");
	vector<float> v1;
	v1.push_back(-0.9);
	v1.push_back(9.01);
	v1.push_back(0.1);
	v1.push_back(-0.5);
	v1.push_back(1.);
	vector<float> v2{ 2.8, -9.09, 4.8, 1.55, -5.01 };
	print(v2);
	v2[4] = v2[3];
	v2[3] = 4.001; // Вставила 4.001 между 3 и 4 элементами
	print(v2);
	
	Settings g;
			
	/*
	g.Add("Один", 1);
	g.Add("Два", 2);
	g.Add("Три", 3);
	cout << g.Get("Один") << endl;
	g.Print();
	/*
	 Вывод при не static
2.8 -9.09 4.8 1.55 -5.01
--------------
2.8 -9.09 4.8 4.001 1.55
--------------
1
Два=2
Один=1
Три=3

--------------

	*/
}