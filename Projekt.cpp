#include <iostream>
#include <h.studio>
#include <stdlib.h>
using namespace std;

float temp;
char choice;
float FtoC(temp);
float FtoK(temp);
float CtoF(temp);
float CtoK(temp);
float KtoF(temp);
float KtoC(temp);

int main(){
    cout << "1 - przelicz Fahr -> Celsius" << endl;
    cout << "2 - przelicz Fahr -> Kelwin" << endl;
    cout << "3 - przelicz Celsius -> Fahr" << endl;
    cout << "4 - przelicz Celsius -> Kelwin" << endl;
    cout << "5 - przelicz  Kelwin -> Celsius" << endl;
    cout << "6 - przelicz Kelwin -> Fahr" << endl;
    cout << "7 - zakończ działanie programu" << endl;
    cin >> choice;

    switch (choice){
        case 1:
            FtoC(temp);
        break;

        case 2:
            FtoK(temp);
        break;

        case 3:
            CtoF(temp);
        break;

        case 4:
            CtoK(temp);
        break;

        case 5:
            KtoC(temp);
        break;

        case 6:
            KtoF(temp);
        break;

        default:
            return 0;
    }
    
    system("cls");
}

FtoC(temp){
    float tempFC=(temp-32.0)*5.0/9.0
    if (tempFC<-273.15)
        cout << "-9999999" << endl;
    else
        cout << tempFC << "C" << endl;
}
FtoK(temp){
    float tempFK=(temp+459.67)*5.0/9.0
    if (tempFK<0)
        cout << "-9999999" << endl;
    else
        cout << tempFK << "K" << endl;
}
CtoF(temp){
    float tempCF=temp*5.0/9.0+32.0
    if (tempCF<-459.67)
        cout << "-9999999" << endl;
    else
        cout << tempCF << "F" << endl;
}
CtoK(temp){
    float tempCK=temp+273.15
    if (tempCK<0)
        cout << "-9999999" << endl;
    else
        cout << tempCK << "K" << endl;
}
KtoF(temp){
    float tempKF=temp*5.0/9.0-459.67
    if (tempKF<-459.67)
        cout << "-9999999" << endl;
    else
        cout << tempKF << "F" << endl;
}
KtoC(temp){
    float tempKC=temp-273.15
    if (tempKC<-273.15)
        cout << "-9999999" << endl;
    else
    cout << tempKC << "C" << endl;
}