#include <iostream>
#include <h.studio>
#include <stdlib.h>
using namespace std;

float temp;
int choice;
float FtoC(temp);
float FtoK(temp);
float CtoF(temp);
float CtoK(temp);
float KtoF(temp);
float KtoC(temp);

float FtoC(temp){
    float tempFC=(temp-32.0)*5.0/9.0
    cout << tempFC << "C" << endl;
}
float FtoK(temp){
    float tempFK=(temp+459.67)*5.0/9.0
    cout << tempFK << "K" << endl;
}
float CtoF(temp){
    float tempCF=temp*5.0/9.0+32.0
    cout << tempCF << "F" << endl;
}
float CtoK(temp){
    float tempCK=temp+273.15
    cout << tempCK << "K" << endl;
}
float KtoF(temp){
    float tempKF=temp*5.0/9.0-459.67
    cout << tempKF << "F" << endl;
}
float KtoC(temp){
    float tempKC=temp-273.15
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

}