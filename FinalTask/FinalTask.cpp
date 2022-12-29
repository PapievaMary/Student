#include <iostream>
#include <string> 
#include "Node.h"
#include "SplayTree.h"
using namespace std;
void Privet();

int main()
{
    setlocale(LC_ALL, "");
    //node rt; - ошибка тк. класс абстрактный

	SplayTree bst;
	string str, vvedi="Введите число:\n";
	int x;

	Privet();
	cin >> str;
	while (str != "End") {
		x = stoi(str);
		bst.insert(x);
		cin >> str;
	}

	while (1) {
		str = "";
		std::cin >> str;
		if (str== "Print"){ bst.prettyPrint(); }
		else if (str =="Search" ) 
		{
			cout << vvedi;
			cin >> x;
			bst.searchTree(x);
		}
		else if (str =="Insert" ) {
			cout << vvedi;
			cin >> x;
			bst.insert(x);
		}
		else if (str =="Delete" ) {
			cout << vvedi;
			cin >> x;
			bst.deleteNode(x);
		}
		else {
			cout << "Некорректный ввод\n";
		}
	}
}

void Privet() {
	cout << "Если вы хотите посмотреть какое дерево у вас получилось напишите: Print\n";
	cout << "Если вы хотите найти число напишите: Search\n";
	cout << "Если вы хотите добавить в дерево число напишите: Insert\n";
	cout << "Если вы хотите удалить число напишите: Delete\n\n";
	cout << "Сначала введите числа, через Enter, которые хотите вставить в Splay-дерево\n";
	cout << "Чтобы закончить ввод, напишите: End\n";
}