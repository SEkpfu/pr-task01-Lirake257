#include <iostream>
using namespace std;
int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    wcout << L"введите колво часов, ставку, % премии" << endl;
    double hc, rph, pr;
    cin >> hc >> rph >> pr;
    wcout << L"заработанная сумма: " << (hc*rph)*(1+(pr/100.0));
}
