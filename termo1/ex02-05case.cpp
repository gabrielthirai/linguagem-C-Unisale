#include<iostream>
using namespace std;

main(){
    float saldo;
    cout<<"Informe o saldo médio que você se encaixa: ";
    cin>>saldo;
    switch ((int) saldo)
    {
        case 0 ... 200:
        {
            cout<<(saldo);
            break;
        }
        case 201 ... 400: 
        {
            cout<<(saldo*0.2);
            break;
        }
        case 401 ... 600: 
        {
            cout<<(saldo*0.3);
            break;
        }
        default:
        {
            cout<<(saldo*0.4);
            break;
        }
    }
}