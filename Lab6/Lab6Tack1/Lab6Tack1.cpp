#include <iostream>
using namespace std;

enum YearCode {
	NEGATIVE,
	BIG,
	OLD,
	BABY,
	SMALL
};

class YearBirthException : public std::exception {
	YearCode code;
public:
	YearBirthException(YearCode code) : code(code) {}
	const char* what() const throw() override {
		if (code == YearCode::NEGATIVE) return "Вы ввели отрицательное число!";
		else if (code == YearCode::BIG) return "Вы ещё не родились ";
		else if (code == YearCode::SMALL) return "Что-то не верится...";
		else if (code == YearCode::OLD) return "Вам уже больше ста лет - невероятно!";
		else if (code == YearCode::BABY) return "Дети стали такими умными!";
	}
};

class YearBirth {
	int year;
public:
	YearBirth(int year) : year(year) {
		if (year < 0) throw YearBirthException(YearCode::NEGATIVE);
		else if (year > 2022) throw YearBirthException(YearCode::BIG);
		else if (year < 1850) throw YearBirthException(YearCode::SMALL);
		else if (year < 1922) throw YearBirthException(YearCode::OLD);
		else if (year > 2017) throw YearBirthException(YearCode::BABY);
	}
	int getYear() {
		return this->year;
	}
	void setYear(int health) {
		if (year < 0) throw YearBirthException(YearCode::NEGATIVE);
		else if (year > 2022) throw YearBirthException(YearCode::BIG);
		else if (year < 1850) throw YearBirthException(YearCode::SMALL);
		else if (year < 1922) throw YearBirthException(YearCode::OLD);
		else if (year > 2017) throw YearBirthException(YearCode::BABY);
		this->year = year;
	}
};

int main()
{
	setlocale(LC_ALL, "");
	cout << "Введите число 1, 2 или 3\n";
	int a;
	cin >> a;
	cout << "Вы ввели: ";
	switch (a)
	{
	case 1: cout << "Один\n";
		break;
	case 2: cout << "Два\n";
		break;
	case 3: cout << "Три\n";
		break;
	default:
		cout << "Некорректное значение\n";
		break;
	}
	cout << "Введите год своего рождения\n";
	int year;
	cin >> year;
	try {
		YearBirth y(year);
		cout << y.getYear() << " - Корректное значение\nСпасибо!\n";
	}
	catch (YearBirthException err) {
		std::cout << err.what();
	}
}