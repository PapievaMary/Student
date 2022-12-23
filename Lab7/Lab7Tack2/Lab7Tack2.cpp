#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<regex>
#include<string>
#include <cstring>
#include <string.h>
#include <stdio.h>
using namespace std;
std::smatch matches;

bool isName(string s) {
    regex reg("[A-Z][a-z]{2,31}", regex_constants::icase);
    return regex_search(s, reg);
}
bool isValidMail(string s) {
    regex reg("^[a-z][a-z0-9_-]+@([a-z][a-z0-9]+\.)+[a-z]{2,4}$", regex_constants::icase);
    return regex_search(s, reg);
}
void print(string s) {
    cout << s << endl;
}

int main()
{
    setlocale(LC_ALL, "");
    cout << "Введите имя:\n";
    string imy;
    //cin >> imy;
    imy = "xfgh";
    if (isName(imy)) { cout << "Имя правильно записано\n"; }
    else { cout << "Это не имя\n"; };

    cout << "Введите строку с @ адресом:\n";   
    string text = "dfgh@dfh.fg gfyjn fhbv: dfxghb@dthg.gfh";
    //cin >> text; 
    smatch matches;
    regex reg("[a-z0-9_\.-]*[a-z0-9_]@([a-z0-9]+[a-z0-9_-]*[a-z0-9]\.)+[a-z0-9]{2,}");
    while (regex_search(text, matches, reg))
    {
        cout << "email из текста: " << matches[0] << endl;
        text = matches.suffix().str();
    }

}