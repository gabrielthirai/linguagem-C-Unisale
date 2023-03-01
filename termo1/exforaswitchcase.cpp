#include <iostream>
using namespace std;

main(){
    int macarrao, molho;
    cout<<"1-Espaguete";
    cout<<"2-Nhoque";
    cout<<"3-Caneloni";
    cout<<"4-ravioli";
    cout<<"Informe o tipo de massa: ";
    cin>>macarrao;
    switch(macarrao){
        case 1:
        {
            cout<<"1-Quatro Queijos";
            cout<<"2-Pomodoro";
            cout<<"3-Bolonhesa";
            cin>>molho;
            switch(molho){
                case 1: cout<<"Espaguete Quatro queijos";
                case 2: cout<<"Espaguete Pomodoro";
                case 3: cout<<"Espaguete a Bolonhesa";
                default:cout<<"Molho não existe";
            }
        }
        case 2:
        {
            cout<<"1 - Carbonara";
            cout<<"2 - Pesto";
            cout<<"3 - Bolonhesa";
            cin>>molho;
            switch (molho){
                case 1: cout<<"Nhoque a Carbonara";
                case 2: cout<<"Nhoque Pesto";
                case 3: cout<<"Nhoque Bolonhesa";
                default:cout<<"Molho não existe";
            }
        }
        case 3:
        {
            cout<<"1 - Alfredo";
            cout<<"2 - Bolonhesa";
            cout<<"3 - Funghi";
            cin>>molho;
            switch(molho){
                case 1: cout<<"Caneloni Alfredo";
                case 2: cout<<"Caneloni Bolonhesa";
                case 3: cout<<"Caneloni Funghi";
                default:cout<<"Molho não existe";
            }
        }
        case 4:
        {
            cout<<"1 - Carbonara";
            cout<<"2 - Pesto";
            cout<<"3 - Bolonhesa";
            cin>>molho;
            switch(molho){
                case 1: cout<<"Ravioli Carbonara";
                case 2: cout<<"Ravioli Pesto";
                case 3: cout<<"Ravioli Bolonhesa";
                default:cout<<"Molho não existe";
            }
        }
    }
}