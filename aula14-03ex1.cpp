#include <iostream>
#include <locale>
using namespace std;

main()
{
    setlocale(LC_ALL, "Portuguese");
    int lado1, lado2;
    cout<<"Digite o valor do lado 1";
    cin>>lado1;
    cout<<"Digite o valor do lado 2";
    cin>>lado2;
    cout<<"A area é "<<(lado1*lado2);
    cout<<"O perimetro é "<<(lado1+lado1+lado2+lado2);
}