#include <iostream>
using namespace std;

main(){
    float saldo;
    cout<<"Digite o valor do saldo médio";
    cin>>saldo;
    if (saldo >= 0 && saldo <= 200.00){
        cout<<(saldo);
    }
    else if (saldo >= 201.00 && saldo <= 400.00){
        cout<<(saldo*0.2);
    }
    else if (saldo >= 401.00 && saldo <= 600.00){
        cout<<(saldo*0.3);
    }
    else if (saldo > 600){
        cout<<(saldo*0.4);
    }
}