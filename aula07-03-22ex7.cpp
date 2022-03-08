#include <iostream>
#include <locale>
using namespace std;
main()
{
    setlocale(LC_ALL, "Portuguese");
    float pfab, porvend, imp;//preço de fabrica informado pelo usuario, porcentagem do vendedor e impostos 
    cout<<"Informe o preço de fábrica do produto";
    cin>>pfab;
    porvend=pfab*0.12;
    imp= pfab*0.2695;
    cout<<(pfab+porvend+imp);
}