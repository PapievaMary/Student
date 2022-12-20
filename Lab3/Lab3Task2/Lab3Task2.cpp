// Lab3Task2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
using namespace std;

void summ(int* begin, int* end)
{
	int summ = 0;
	for (int* p = begin; p < end; p++)
	{
		summ = summ + *p;
	}
	cout << "Сумма всех элементов массива = " << summ << "\n";
}

int add(int a, int b) { return a + b; }

int sub(int a, int b) { return a - b; }

int(*choice(char c))(int, int)
{
	switch (c)
	{
	case '+':
		return add;
		break;

	case '-':
		return sub;
		break;

	default:
		return nullptr;
		break;
	}
}
int main()
{
	setlocale(LC_ALL, "");
	int array[] = { 1,2,3,4,5 };
	int length = sizeof(array) / sizeof(*array);
	cout << "Массив = ";
	for (int i = 0; i < 5; i++) {
		cout << *(array + i) << " ";
	}
	cout << endl;

	summ(array, &array[length]);
	cout << "Сумма = " << add(1, 2) << "\n";
	cout << "Разность = " << sub(3, 1) << "\n";
	cout << choice('+')(2, 3) << " = " << add(2, 3) << endl;
	cout << choice('-')(2, 3) << " = " << sub(2, 3) << endl;
	/*****/
	float* x = new float;
	*x = 1.11;
	cout << *x << endl;
	delete x;
}