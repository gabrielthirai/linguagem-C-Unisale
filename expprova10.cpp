#include<iostream>
using namespace std;

main(){
    char op;
    int n1,n2;
    cout<<"Informe o primeiro valor";
    cin>>n1;
    cout<<"Informe o segundo valor";
    cin>>n2;
    cout<<"Informe a operação que será realizada";
    cin>>op;
    if(op=='s'){
        cout<<(n1+n2);
    }
    else if (op == 'p'){
        cout<<(n1*n2);
    }
    else if (op == 'v'){
        cout<<(n1-n2);
    }
    else if (op == 'd'){
        cout<<(n1/n2);
    }
    else if (op == 'q'){
        return(0);
    }
}