#include <iostream>
#include <locale>
using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    int codigo,quantidade;
    cout<<"100-Cachorro Quente - R$ 1,70 cada\n";
    cout<<"101-Bauru Simples - R$ 2,30 cada\n";
    cout<<"102-Bauru com ovo - R$ 2,60 cada\n";
    cout<<"103-Hamburguer - R$ 2,40 cada\n";
    cout<<"104-Cheeseburguer - R$ 2,50 cada\n";
    cout<<"105-Refrigerante - R$ 1,00 cada\n";
    cout<<"Digite o código do que querer: \n";
    cin>>codigo;
    cout<<"Digite a quantidade: \n";
    cin>>quantidade;
    switch (codigo)
    {
        case 100:{
            cout<<(quantidade*1.70);
            break;
        }
        case 101:{
            cout<<(quantidade*2.30);
            break;
        }
        case 102:{
            cout<<(quantidade*2.60);
            break;
        }
        case 103:{
            cout<<(quantidade*2.40);
            break;
        }
        case 104:{
            cout<<(quantidade*2.50);
            break;
        }
        case 105:{
            cout<<(quantidade*1);
            break;
        }
        
        default:cout<<"Erro";
            break;
    }
}