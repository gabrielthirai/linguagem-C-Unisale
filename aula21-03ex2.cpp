#include <iostream>
#include <locale>
using namespace std;

main()
{
    setlocale(LC_ALL, "Portuguese");
    int n;
    cout<<"Digite um numero qualquer";
    cin>>n;
    if(n%2==0)
    {
        cout<<"é par";
    }
    else
    {
        cout<<"é impar";
    }
    if(n>=1)
    {
        cout<<"é positivo";
    }
    else if (n<=-1){
        cout<<"é negativo";
    }
    else if(n==0)
    {
        cout<<"O numero é 0";
    }
}