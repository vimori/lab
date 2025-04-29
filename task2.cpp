#include <iostream>
#include <cstdlib>
#include <string>
#include <Windows.h>
using namespace std;

string UpCaseRus(string& S);

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    string one, two, three, four, five;
    cout << "Введите 5 произвольных строк\n";
    cin >> one >> two >> three >> four >> five;

    cout << UpCaseRus(one) << "\n";
    cout << UpCaseRus(two) << "\n";
    cout << UpCaseRus(three) << "\n";
    cout << UpCaseRus(four) << "\n";
    cout << UpCaseRus(five) << "\n";
}


string UpCaseRus(string& S) {
    for (int i = 0; i < S.size(); i++)
    {
        if (((int)S[i] >= -32) && ((int)S[i] < 0)) //проверяет, является ли символ строчной русской буквой
        {
            S[i] = char(int(S[i]) - 32);
        }
        if ((int)S[i] == -72) //Специальное условие для буквы 'ё'
        {
            S[i] = char(int(S[i]) - 16);
        }
    }
    return S;
}
