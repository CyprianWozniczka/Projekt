#include <iostream>
#include <stdlib.h>
#include "Projekt.h"
using namespace std;

float temp;
char choice;
int dataCounter;

int main(){
    int dataCounter=0;
    double TempData[100];
    char Jednostka[100];
    while (1){
        cout << "1 - przelicz Fahr -> Celsius" << endl;
        cout << "2 - przelicz Fahr -> Kelwin" << endl;
        cout << "3 - przelicz Celsius -> Fahr" << endl;
        cout << "4 - przelicz Celsius -> Kelwin" << endl;
        cout << "5 - przelicz  Kelwin -> Celsius" << endl;
        cout << "6 - przelicz Kelwin -> Fahr" << endl;
        cout << "7 - zakończ działanie programu" << endl;
        cout << "8 - wyświetl historię przeliczeń" << endl;
        cin >> choice;
        cout << "Podaj temperaturę do przeliczenia: ";
        cin >> temp;
        if (char choice >1 && char choice <7){
            TempData[dataCounter]=temp;
            if (char choice==1 || char choice==2)
                Jednostka[dataCounter]='F';
            else if (char choice==3 || char choice==4)
                Jednostka[dataCounter]='C';
            else if (char choice==5 || char choice==6)
                Jednostka[dataCounter]='K';
            dataCounter++;
        }
        if (dataCounter>=100){
                cout << "BŁĄD: Przekroczono maksymalną liczbę zapisów w historii!" << endl;
            
            switch (choice){
                case 1:
                    FtoC(float temp);
                    if (dataCounter<100){
                        TempData[dataCounter]=FtoC(temp);
                        Jednostka[dataCounter]='C';
                        dataCounter++;
                    }
                break;

                case 2:
                    FtoK(float temp);
                    if (dataCounter<100){
                        TempData[dataCounter]=FtoK(temp);
                        Jednostka[dataCounter]='K';
                        dataCounter++;
                    }
                break;

                case 3:
                    CtoF(float temp);
                    if (dataCounter<100){
                        TempData[dataCounter]=CtoF(temp);
                        Jednostka[dataCounter]='F';
                        dataCounter++;
                    }
                break;

                case 4:
                    CtoK(float temp);
                    if (dataCounter<100){
                        TempData[dataCounter]=CtoK(temp);
                        Jednostka[dataCounter]='K';
                        dataCounter++;
                    }
                break;

                case 5:
                    KtoC(float temp);
                    if (dataCounter<100){
                        TempData[dataCounter]=KtoC(temp);
                        Jednostka[dataCounter]='C';
                        dataCounter++;
                    }
                break;

                case 6:
                    KtoF(float temp);
                    if (dataCounter<100){
                    TempData[dataCounter]=KtoF(temp);
                    Jednostka[dataCounter]='F';
                    dataCounter++;
                    }
                break;

                case 7:
                    return 0;

                case 8:
                    cout << "Historia przeliczeń: " << endl;
                    for (int i=0;i<dataCounter;i=i+2){
                        cout << TempData[i] << " " << Jednostka[i] << "=" << TempData[i+1] << " " << Jednostka[i+1] << endl;
                    }

                default:
                    cout << "BŁĄD: Nieprawidłowy wybór!" << endl;
                break;
            }
    }
        
        system("cls");
    }
}

float FtoC(float temp){
    float tempFC=(temp-32.0)*5.0/9.0;
    if (tempFC<-273.15)
        cout << "MORON" << endl;
    else
        cout << tempFC << "C" << endl;
    return tempFC;
}
float FtoK(float temp){
    float tempFK=(temp+459.67)*5.0/9.0
    if (tempFK<0)
        cout << "MORON" << endl;
    else
        cout << tempFK << "K" << endl;
    return tempFK;
}
float CtoF(floattemp){
    float tempCF=temp*5.0/9.0+32.0
    if (tempCF<-459.67)
        cout << "MORON" << endl;
    else
        cout << tempCF << "F" << endl;
    return tempCF;
}
float CtoK(float temp){
    float tempCK=temp+273.15
    if (tempCK<0)
        cout << "MORON" << endl;
    else
        cout << tempCK << "K" << endl;
    return tempCK;
}
float KtoF(float temp){
    float tempKF=temp*5.0/9.0-459.67
    if (tempKF<-459.67)
        cout << "MORON" << endl;
    else
        cout << tempKF << "F" << endl;
    return tempKF;
}
float KtoC(float temp){
    float tempKC=temp-273.15
    if (tempKC<-273.15)
        cout << "MORON" << endl;
    else
        cout << tempKC << "C" << endl;
    return tempKC;
}
