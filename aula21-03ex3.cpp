#include <iostream>
#include <locale>
using namespace std;

main()
{
    setlocale(LC_ALL, "Portuguese");
    int n1, n2;
    cout<<"Escreva um numero";
    cin>>n1;
    cout<<"Escreva outro numero";
    cin>>n2;
    if (n1==n2)
    {
        cout<<"Numeros iguais e encerrar a execução";
    }
    else if(n1>n2)
    {
        cout<<n1<<"é maior";
    }
    else if(n2>n1)
    {
        cout<<n2<<"é maior";
    }
}