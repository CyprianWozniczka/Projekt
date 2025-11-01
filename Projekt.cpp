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

float FtoC(temp){
    float tempFC=(temp-32.0)*5.0/9.0
    if (tempFC<-273.15)
        cout << "-9999999" << endl;
    else
        cout << tempFC << "C" << endl;
}
float FtoK(temp){
    float tempFK=(temp+459.67)*5.0/9.0
    if (tempFK<0)
        cout << "-9999999" << endl;
    else
        cout << tempFK << "K" << endl;
}
float CtoF(temp){
    float tempCF=temp*5.0/9.0+32.0
    if (tempCF<-459.67)
        cout << "-9999999" << endl;
    else
        cout << tempCF << "F" << endl;
}
float CtoK(temp){
    float tempCK=temp+273.15
    if (tempCK<0)
        cout << "-9999999" << endl;
    else
        cout << tempCK << "K" << endl;
}
float KtoF(temp){
    float tempKF=temp*5.0/9.0-459.67
    if (tempKF<-459.67)
        cout << "-9999999" << endl;
    else
        cout << tempKF << "F" << endl;
}
float KtoC(temp){
    float tempKC=temp-273.15
    if (tempKC<-273.15)
        cout << "-9999999" << endl;
    else
    cout << tempKC << "C" << endl;
}

int main(){
    cout << "1 - przelicz Fahr -> Celsius" << endl;
    cout << "2 - przelicz Fahr -> Kelwin" << endl;
    cout << "3 - przelicz Celsius -> Fahr" << endl;
    cout << "4 - przelicz Celsius -> Kelwin" << endl;
    cout << "5 - przelicz  Kelwin -> Celsius" << endl;
    cout << "6 - przelicz Kelwin -> Fahr" << endl;
    cout << "7 - zakończ działanie programu" << endl;
    cin >> choice >> endl;

    switch (choice){
        case 1:
        float FtoC(temp);
        break;

        case 2:
        float FtoK(temp);
        break;

        case 3:
        float CtoF(temp);
        break;

        case 4:
        float CtoK(temp);
        break;

        case 5:
        float KtoC(temp);
        break;

        case 6:
        float KtoF(temp);
        break;

        default:
        return 0;
    }
    
    system("cls");
}