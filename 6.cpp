#include <iostream>
using namespace std;
int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");

    string name1,name2;
    wcout << L"Введите фамилии 2х работников: ";
    cin >> name1 >> name2;

    double s1,s2,k1,k2,zp1,zp2,nal1,nal2;
    wcout << L"Введите ставки и колво часов работы 2х работников: ";
    cin >> s1 >> k1 >> s2 >> k2;
    
    zp1=s1*k1;
    nal1=0.13*zp1;
    zp1 -= nal1;

    zp2=s2*k2;
    nal2=0.13*zp2;
    zp2 -= nal2;

    if (zp1 < 1000){
        cout << name1 << endl;
    }
    if (nal1>50){
        cout << name1[0] << "-" << name1[size(name1)-1] << endl;
    }
    if (zp2 < 1000){
        cout << name2;
    }
    if (nal2>50){
        cout << name2[0] << "-" << name2[size(name2)-1];
    }
    
}
