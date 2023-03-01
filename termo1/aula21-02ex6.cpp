#include <iostream>
#include <locale>
using namespace std;

main()
{
    setlocale(LC_ALL, "Portuguese");
    int n1,n2,n3,n4;

    cout<<"Informe os valores do Número 1";
    cin>>n1;
    cout<<"Informe os valores do Número 2";
    cin>>n2;
    cout<<"Informe os valores do Número 3";
    cin>>n3;
    cout<<"Informe os valores do Número 4";
    cin>>n4;

    cout<<((n1*n1)+(n2*n2)+(n3*n3)+(n4*n4));
}