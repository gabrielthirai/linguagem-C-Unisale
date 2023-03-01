#include<iostream>
using namespace std;

main(){
    int codigo;
    cout<<"Informe o código de origem";
    cin>>codigo;
    if(codigo == 1){
        cout<<"Sul";
    }
    else if(codigo == 2){
        cout<<"Norte";
    }
    else if (codigo == 3){
        cout<<"Leste";
    }
    else if (codigo == 4){
        cout<<"Oeste";
    }
    else if (codigo == 5){
        cout<<"Nordeste";
    }
    else if (codigo == 6){
        cout<<"Sudeste";
    }
    else if (codigo == 7){
        cout<<"Centro - Oeste";
    }
    else if (codigo == 8){
        cout<<"Noroeste";
    }
    else{
        cout<<"Digite Novamente";
    }
}