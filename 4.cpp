#include <iostream>
using namespace std;

std::tuple<double, double, double> fff(double hc, double rph, double pr) {
    double zp = (hc*rph)*(1+(pr/100.0));
    return {zp, zp*0.13, zp-zp*0.13};
    // Или в C++17-: return std::make_tuple(1, 2, 3);
}

int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    wcout << L"введите колво часов, ставку, % премии" << endl;
    double hc, rph, pr;
    cin >> hc >> rph >> pr;
    auto [a,b,c] = fff(hc,rph,pr);
    wcout << L"ЗП: " << a << endl << L"налог: " << b << endl;
    wcout << L"Сумма на руки: " << c << endl;
}
