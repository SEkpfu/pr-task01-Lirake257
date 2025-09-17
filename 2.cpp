#include <iostream>
using namespace std;

double nal(double zp){
    return zp*0.13;
}

double soh(double nal, double zp){
    return zp-nal;
}

int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    wcout << L"введите колво часов, ставку, % премии" << endl;
    double hc, rph, pr, zarp;
    cin >> hc >> rph >> pr;
    zarp = (hc*rph)*(1+(pr/100.0));
    wcout << L"заработанная сумма: " << zarp << endl;
    wcout << L"налог: " << nal(zarp) << endl << L"сумма на руки: " << soh(nal(zarp), zarp);
}
