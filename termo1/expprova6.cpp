#include <iostream>
using namespace std;

main(){
    int p1, p2, p3, p4, notafinal;
    cout<<"Digite sua nota na prova 1";
    cin>>p1;
    cout<<"Digite sua nota na prova 2";
    cin>>p2;
    cout<<"Digite sua nota na prova 3";
    cin>>p3;
    cout<<"Digite sua nota na prova 4";
    cin>>p4;
    notafinal = (p1 + p2 + p3 + p4)/4;
    if (notafinal >= 7){
        cout<<"Você foi aprovado";
    }
    else{
        cout<<"REPROVADO";
    }
}