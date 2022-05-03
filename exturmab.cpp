#include <iostream> 
#include<locale>
using namespace std; 
main(){ 
    setlocale(LC_ALL, "Portuguese");
    int x, y, z; 
    cout<<"Digite 1 número de sua escolha. Esse será o 1º número: "<< endl; 
    cin>>x; 
    cout<<"Digite o 2º número: "<< endl; 
    cin>>y; 
    cout<<"Digite o 3º número: "<< endl; 
    cin>>z; 
    if(x < y < z){ 
    cout<<" é o menor número\n"<<(x); 
    } 
    else if (x < z < y){ 
    cout<<" é o menor número\n"<<(x); 
    } 
    else if (y < x < z){ 
    cout<<" é o menor número\n"<<(y); 
    } 
    else if (y < z < x){ 
    cout<<" é o menor número\n"<<(y); 
    } 
    else if (z < x < y){ 
    cout<<" é o menor número\n"<<(z); 
    } 
    else if (z < y < x){ 
    cout<<" é o menor número\n"<<(z); 
    } 
}