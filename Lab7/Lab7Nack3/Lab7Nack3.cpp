#define _USE_MATH_DEFINES 
#include <iostream>
#include <fstream>
#include <string>
using std::cout;
using std::cin;
std::fstream fs;

int main()
{
    setlocale(LC_ALL, "");
    cout << "Введите радиус окружности:\n";
    double r,S;
    cin >> r;
    S = 2 * M_PI * r;
    cout << "Длина окружности = "<<S << "\n";
    cout << "Округлённая длина окружности = " << round(S * 1000 + 0.5) / 1000 << "\n";

    //*****Файл*****//
    cout << "Введите произвольную строку:\n";
    fs.open("a.txt", std::ios::out);
    std::string str, chit;
    cin >> str;
    fs << str;
    fs.close();

    cout << "Введите строку для записи в файл или команду read,erase или exit:\n";
    while (1) {
        cin >> str;    
        if (str == "read")    
        {       
            fs.open("a.txt", std::ios::in);        
            fs >> chit;        
            cout << chit << "\n";        
            fs.close();    
        }    
        else if (str == "erase")    
        {        
            std::ofstream ofs;        
            ofs.open("a.txt", std::ofstream::out | std::ofstream::trunc);       
            ofs.close();    
        }    
        else if (str == "exit") { break; }    
        else     
        {        
            fs.open("a.txt", std::ios::out);        
            fs << str;        
            fs.close();    
        }
    }
}