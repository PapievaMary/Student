#include <iostream>
#include <Windows.h>

int main() //Лабораторная работа 2
{
    using namespace std;
    //setlocale(LC_ALL, ""); 
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double x, y;
    cout << "Дайте два числа\n";
    cin >> x >> y;
    cout << "Cреднее арифметическое x и y = " << (x+y)/2 <<"\n";
    cout << "Введите знак операции: +, -, * или \\\n";
    char t;
    cin >> t;
    /*
    if (t =='+'){ cout << "x" << t << "y = " << x + y << "\n"; }
    if (t == '-'){ cout << "x" << t << "y = " << x - y << "\n"; }
    if (t == '*') { cout << "x" << t << "y = " << x * y << "\n"; }
    if (t == '/') { cout << "x" << t << "y = " << x / y << "\n"; }
    */
    switch (t)
    {
    case '+': cout << "x"<< t<< "y = " << x+y << "\n";
        break;
    case '-': cout << "x" << t << "y = " << x - y << "\n";
        break;
    case '/': cout << "x" << t << "y = " << x / y << "\n";
        break;
    case '*': cout << "x" << t << "y = " << x * y << "\n";
        break;
    }
}