#include <iostream>
using namespace std;
int main(){
    double stavki[4], hours[4][12], res[4][12][2];
    for(int i=0;i<4;i++){
        cout << "enter stavki for " << i+1 << " rabootnik" << endl;
        cin >> stavki[i];
    }
    for(int i=0;i<4;i++){
        cout << "enter hours for " << i+1 << " rabootnik" << endl;
        for(int j=0; j<12; j++){
            cin >> hours[i][j];
        }
    }
    for (int i=0; i<4; i++){
        for (int j=0; j<12; j++){
            res[i][j][0] = stavki[i]*hours[i][j];
            res[i][j][1] = res[i][j][0]*0.13;
        }
    }
    //1
    cout << "1) rabotnik 1 vo vtorom month poluchil " << res[0][1][0] - res[0][1][1] << endl;
    //2
    double nal3{0};
    for (int i=0;i<12;i++){
        nal3 += res[2][i][1];
    }
    cout << "2) nalog rabotnika 3 za full year: " << nal3 << endl;
    //3,4
    int max3{0}, rabnum{0};
    double fullsum{0};
    for(int i=0; i<4; i++){
        int isum{0};
        for (int j=0; j<12; j++){
            isum += res[i][j][0];
            fullsum += (res[i][j][0] - res[i][j][1]);
        }
        if(isum>max3){
            max3=isum;
            rabnum = i+1;
        }
    }
    cout << "3) rabotnik number " << rabnum << " poluchil bolshe vseh" << endl;
    cout << "4) full summ of all rabotnikov: " << fullsum;

}