#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    int a = 11;
    int* pointer = &a;
    cout << "Адрес указателя = " << pointer << endl;
    cout << "Значение, которое хранится по этому адресу = " << *pointer << endl;
    *pointer = 20;
    cout << "Новое значение переменной = " << a << endl;
    /*****/
    int arr[] = { 1,2,3,4 };
    cout << "Вывод всех элементов массива, используя указатель: \n";
    for (int i = 0; i < 4; i++) {
        cout << *(arr + i) << " ";
    }
    cout << "\n";
    /*****/
    int x = 5;
    int* const p = &x;
    cout << "Значение переменной x = " << x << "\n";
    cout << "Адрес переменной = " << p << "\n";
    *p = 55;
    cout << "Новое значение переменной x = " << x << "\n";
    cout << "Адрес переменной = " << p << "\n";
}