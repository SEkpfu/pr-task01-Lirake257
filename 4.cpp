#include <iostream>
using namespace std;

void fff(double hc, double rph, double pr) {
    double zp = (hc*rph)*(1+(pr/100.0));
    wcout << L"ЗП: " << zp << endl;
    wcout << L"налог: " << zp*0.13 << endl;
    wcout << L"Сумма на руки: " << zp-zp*0.13 << endl;
}

int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    wcout << L"введите колво часов, ставку, % премии" << endl;
    double hc, rph, pr;
    cin >> hc >> rph >> pr;
    fff(hc,rph,pr);
}
