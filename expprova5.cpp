#include <iostream>
using namespace std;

main(){
    int senha;
    cout<<"Digite uma senha";
    cin>>senha;

    if(senha == 9){
        cout<<"Acesso Permitido";
    }
    else{
        cout<<"Acesso Negado";
    }
}