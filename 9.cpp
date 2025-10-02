#include <iostream>
using namespace std;
int nummin(int n, int zpmin, int zp[]){
    for(int i=0; i<n; i++){
        if(zp[i] == zpmin){
            return i+1;
        }
    }
}
int nummax(int n, int zpmax, int zp[]){
    for(int i=0; i<n; i++){
        if(zp[i] == zpmax){
            return i+1;
        }
    }
}
int maxnum(int n, int zpmax, int zp[]){
    for(int i=0; i<n; i++){
        if(zp[i] == zpmax){
            return zp[i];
        }
    }
}
int count50(int n, int value, int zp[]){
    int k=0;
    for (int i=0; i<n; i++){
        if (zp[i] > value){
            k++;
        }
    }
    return k;
}
int summ(int n, int zp[]){
    int sum{};
    for(int i=0; i<n; i++){
        sum+=zp[i];
    }
    return sum;
}
int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int value;
    wcout << L"введите число для сравнения " << endl;
    cin >> value;
    int n;
    wcout << L"введите колво работников" << endl;
    cin >> n;
    int stavki[n]{}, hours[n]{}, zp[n]{};
    double nal[n]{};
    int minzp = 2147000000, maxzp = 0, k50=0;
    wcout << L"Введите данные для работников (ставка, часы): " << endl;
    for(int i=0; i < n; i++){
        cout << i+1 << ". ";
        cin >> stavki[i] >> hours[i];
        zp[i] = stavki[i]*hours[i];
        nal[i] = zp[i]*0.13;
        if(minzp > zp[i]){
            minzp = zp[i];
        }
        if(maxzp < zp[i]){
            maxzp = zp[i];
        }
        if((zp[i] - nal[i])>50000){
            k50++;
        }


    }
    wcout << L"рабботник номер " << nummin(n,minzp,zp) << L" заработал меньше всех" << endl;
    wcout << L"работник номер " << nummax(n,maxzp,zp) << L" заработал больше всех:" << maxnum(n,maxzp,zp) << endl;
    wcout << count50(n,value,zp) << L" работников получили более " << value << endl;
    wcout << summ(n,zp) << L" - сумма уплаченного бригадой налога" << endl;
}