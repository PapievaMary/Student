#include <iostream>
#include<string>
using namespace std;

void print(string s) {
    cout << s << endl;
}

int main()
{
    setlocale(LC_ALL, "");
    cout << "Введите строку:\n";
    string s;
    cin >> s;
    print(s.substr(1, 3));
    int index = s.find("a");
    if (index == 0) { cout << "Символа a не найдено\n"; }
    else { cout << index << "\n"; };
}