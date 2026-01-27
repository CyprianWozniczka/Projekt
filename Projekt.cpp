#include <iostream>
#include <stdlib.h>
#include "Projekt.h"
#include <time.h>
using namespace std;

float temp;
char choice;
int dataCounter=0;

int main(){
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
        if (char choice >='1' && char choice <='7'){ //Zapis wprowadzonej temp.
            TempData[dataCounter]=temp;
            if (char choice=='1' || char choice=='2')
                Jednostka[dataCounter]='F';
            else if (char choice=='3' || char choice=='4')
                Jednostka[dataCounter]='C';
            else if (char choice=='5' || char choice=='6')
                Jednostka[dataCounter]='K';
            dataCounter++;
        }
        if (dataCounter>=100){
                cout << "BŁĄD: Przekroczono maksymalną liczbę zapisów w historii!" << endl;
        }
            
            switch (choice){
                case '1':
                    FtoC(temp);
                    if (dataCounter<100){
                        TempData[dataCounter]=FtoC(temp);
                        Jednostka[dataCounter]='C';
                        dataCounter++;
                    }
                break;

                case '2':
                    FtoK(temp);
                    if (dataCounter<100){
                        TempData[dataCounter]=FtoK(temp);
                        Jednostka[dataCounter]='K';
                        dataCounter++;
                    }
                break;

                case '3':
                    CtoF(temp);
                    if (dataCounter<100){
                        TempData[dataCounter]=CtoF(temp);
                        Jednostka[dataCounter]='F';
                        dataCounter++;
                    }
                break;

                case '4':
                    CtoK(temp);
                    if (dataCounter<100){
                        TempData[dataCounter]=CtoK(temp);
                        Jednostka[dataCounter]='K';
                        dataCounter++;
                    }
                break;

                case '5':
                    KtoC(temp);
                    if (dataCounter<100){
                        TempData[dataCounter]=KtoC(temp);
                        Jednostka[dataCounter]='C';
                        dataCounter++;
                    }
                break;

                case '6':
                    KtoF(temp);
                    if (dataCounter<100){
                    TempData[dataCounter]=KtoF(temp);
                    Jednostka[dataCounter]='F';
                    dataCounter++;
                    }
                break;

                case '7':
                    return 0;
                    break;

                case '8':
                    cout << "Historia przeliczeń: " << endl;
                    choice=0;
                    cout << "Wybierz zbiór danych do wyświetlenia: " << endl;
                    cout << "1 - Przeliczenia C -> X" << endl;
                    cout << "2 - Przeliczenia F -> X" << endl;
                    cout << "3 - Przeliczenia K -> X" << endl;
                    cout << "4 - Wszystkie przeliczenia" << endl;
                    cin >> choice;
                    switch (choice){
                        case '1':{
                            for (int i=0;i<dataCounter;i=i+2){
                                if (Jednostka[i]=='C')
                                    cout << i << " " << TempData[i] << " " << Jednostka[i] << "=" << TempData[i+1] << " " << Jednostka[i+1] << endl;
                            }
                            break;
                        }
                        case '2':{
                            for (int i=0;i<dataCounter;i=i+2){
                                if (Jednostka[i]=='F')
                                    cout << i << " " << TempData[i] << " " << Jednostka[i] << "=" << TempData[i+1] << " " << Jednostka[i+1] << endl;
                            }
                            break;
                        }
                        case '3':{
                            for (int i=0;i<dataCounter;i=i+2){
                                if (Jednostka[i]=='K')
                                    cout << i << " " << TempData[i] << " " << Jednostka[i] << "=" << TempData[i+1] << " " << Jednostka[i+1] << endl;
                            }
                            break;
                        }
                        case '4':{ 
                            for (int i=0;i<dataCounter;i=i+2){
                                cout << i << " " << TempData[i] << " " << Jednostka[i] << "=" << TempData[i+1] << " " << Jednostka[i+1] << endl;
                            }
                            break;
                        }  
                        default:
                            cout << "BŁĄD: Nieprawidłowy wybór!" << endl;
                            break;
                        
                    }
                    cout << "wybierz operację na danych" << endl;
                    cout << "1 - usuń historię" << endl;
                    cout << "2 - modfikuj historię" << endl;
                    cout << "3 - losowe wypełnienie historii" << endl;
                    cout << "4 - powrót do menu głównego" << endl;
                    cin >> choice;
                    switch (choice){
                        case '1':
                            dataCounter=0;
                            cout << "Historia została usunięta." << endl;
                        break;

                        case '2':
                            int index;
                            char newUnit;
                            double newTemp;
                            cout << "Podaj indeks wpisu do modyfikacji: ";
                            cin >> index;
                            if (index<0 || index>=dataCounter || index%2!=0){
                                cout << "BŁĄD: Nieprawidłowy indeks!" << endl;
                                break;
                            }
                            cout << "Podaj nową temperaturę: ";
                            cin >> newTemp;
                            cout << "Podaj nową jednostkę (C/F/K): ";
                            cin >> newUnit;
                            if (newUnit!='C' && newUnit!='F' && newUnit!='K'){
                                cout << "BŁĄD: Nieprawidłowa jednostka!" << endl;
                                break;
                            }
                            TempData[index]=newTemp;
                            Jednostka[index]=newUnit;
                            cout << "Wpis został zmodyfikowany." << endl;
                        break;

                        case '3':
                            int numEnt;
                            cout << "Ile losowych wpisów dodać do historii? ";
                            cin >> numEnt;
                            if (dataCounter+numEnt*2>100){
                                cout << "BŁĄD: Przekroczono maksymalną liczbę zapisów w historii!" << endl;
                                break;
                            }
                            else{
                                srand(time(0));
                                for (int i=dataCounter;i<dataCounter+numEnt*2;i=i+2){
                                    TempData[i]=rand()%1000/10.0;
                                    int unitType=rand()%3;
                                    if (unitType==0){
                                        Jednostka[i]='C';
                                        if (rand()%2==0)
                                            TempData[i+1]=CtoF(TempData[i]);
                                        else
                                            TempData[i+1]=CtoK(TempData[i]);
                                    }
                                    else if (unitType==1){
                                        Jednostka[i]='F';
                                        if (rand()%2==0)
                                            TempData[i+1]=FtoC(TempData[i]);
                                        else
                                            TempData[i+1]=FtoK(TempData[i]);
                                    }
                                    else{
                                        Jednostka[i]='K';
                                        if (rand()%2==0)
                                            TempData[i+1]=KtoC(TempData[i]);
                                        else
                                            TempData[i+1]=KtoF(TempData[i]);
                                    }
                                    dataCounter=dataCounter+2;
                                }
                            }

                            cout << "Historia została wypełniona losowymi danymi." << endl;
                            break;

                        case '4':
                            break;

                        default:
                            cout << "BŁĄD: Nieprawidłowy wybór!" << endl;
                        break;
                    }
                    choice=0;


                default:
                    cout << "BŁĄD: Nieprawidłowy wybór!" << endl;
                break;
                
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
    float tempFK=(temp+459.67)*5.0/9.0;
    if (tempFK<0)
        cout << "MORON" << endl;
    else
        cout << tempFK << "K" << endl;
    return tempFK;
}
float CtoF(float temp){
    float tempCF=temp*9.0/5.0+32.0;
    if (tempCF<-459.67)
        cout << "MORON" << endl;
    else
        cout << tempCF << "F" << endl;
    return tempCF;
}
float CtoK(float temp){
    float tempCK=temp+273.15;
    if (tempCK<0)
        cout << "MORON" << endl;
    else
        cout << tempCK << "K" << endl;
    return tempCK;
}
float KtoF(float temp){
    float tempKF=temp*9.0/5.0-459.67;
    if (tempKF<-459.67)
        cout << "MORON" << endl;
    else
        cout << tempKF << "F" << endl;
    return tempKF;
}
float KtoC(float temp){
    float tempKC=temp-273.15;
    if (tempKC<-273.15)
        cout << "MORON" << endl;
    else
        cout << tempKC << "C" << endl;
    return tempKC;
}
