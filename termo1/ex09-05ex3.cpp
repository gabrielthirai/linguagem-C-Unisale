#include <iostream>
#include <locale>
using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    int n1,n2, escolhaDoUsuario;
    cout<<"Digite um número\n";
    cin>>n1;
    cout<<"Digite outro número\n";
    cin>>n2;
    cout<<"1-Média entre os números digitados\n";
    cout<<"2-Diferença entre os números\n";
    cout<<"3-Produtos entre os números\n";
    cout<<"4-Divisão do primeiro número pelo segundo\n";
    cout<<"Digite qual será sua escolha:\n";
    cin>>escolhaDoUsuario;

    switch (escolhaDoUsuario)
    {
    case 1:
    {
        cout<<((n1+n2)/2);
        break;
    }
    case 2:
    {
        cout<<(n1-n2);
        break;
    }
    case 3:
    {
        cout<<(n1*n2);
        break;
    }
    case 4:
    {
        cout<<(n1/n2);
        break;
    }
    
    default:cout<<"escolha digitada não encontrada";
        break;
    }
}