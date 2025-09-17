#include <iostream>
using namespace std;
int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");

    double s1,s2,s3,s4,s5,k1,k2,k3,k4,k5;

    wcout << L"Введите данные для работников (ставка, часы): " << endl << L"1. ";
    cin >> s1 >> k1;
    cout << "2. ";
    cin >> s2 >> k2;
    cout << "3. ";
    cin >> s3 >> k3;
    cout << "4. ";
    cin >> s4 >> k4;
    cout << "5. ";
    cin >> s5 >> k5;

    wcout << L"сумма заработанная:" << endl;
    wcout << L"1 работником: " << s1*k1 << endl;
    wcout << L"2 работником: " << s2*k2 << endl;
    wcout << L"3 работником: " << s3*k3 << endl;
    wcout << L"4 работником: " << s4*k4 << endl;
    wcout << L"5 работником: " << s5*k5 << endl;
    wcout << L"средняя зп: " << (s1*k1+s2*k2+s3*k3+s4*k4+s5*k5)/5 << endl;
}