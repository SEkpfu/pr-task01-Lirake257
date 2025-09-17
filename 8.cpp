#include <iostream>
using namespace std;
int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");

    int n;
    wcout << L"введите колво работников" << endl;
    cin >> n;
    long long stavki[n]{}, hours[n]{}, zp[n]{};
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
    //1
    cout << 1 << endl;
    for(int i=0; i<n;i++){
        if(zp[i] == minzp){
            wcout << L"работник номер " << i+1 << L" получил меньше всех" << endl;
            break;
        }
    }
    //2
    cout << 2 << endl;
    for(int i=0; i<n;i++){
        if(zp[i] == maxzp){
            wcout << L"работник номер " << i+1 << L" получил больше всех: " << maxzp << endl;
        }
    }
    //3
    cout << 3 << endl;
    wcout << k50 << L" работников получили более 50000: ";
    for(int i=0; i<n; i++){
        if (zp[i] - nal[i] > 50000){
            cout << i+1 << " ";
        }
    }
    cout << endl;
    //4
    cout << 4 << endl;
    double sum=0;
    for(int i; i < n; i++){
        sum += nal[i];
    }
    wcout << L"Сумма налога, уплаченного всей бригадой: " << sum << endl;
    return 0;
}