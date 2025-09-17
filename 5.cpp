#include <iostream>
using namespace std;
int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");

    double s1,s2,k1,k2;
    wcout << L"Введите ставки и колво часов работы 2х работников: ";
    cin >> s1 >> k1 >> s2 >> k2;
    if (s1*k1 > s2*k2){
        wcout << L"работник 1";
    }
    else if(s1*k1 == s2*k2){
        wcout << L"работники заработали одинаково";
    }
    else{
        wcout << L"работник 2";
    }
}
