#include <iostream>
using namespace std;

double input(){
    double res;
    cin >> res;
    return res;
}

int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    wcout << L"введите колво часов, ставку, % премии" << endl;
    double hc, rph, pr;
    hc = input();
    rph = input();
    pr = input();
    wcout << L"заработанная сумма: " << (hc*rph)*(1+(pr/100.0)) << endl;
}
