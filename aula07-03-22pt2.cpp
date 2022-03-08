#include <iostream>
#include <locale>
using namespace std;
main(){
    setlocale(LC_ALL, "Portuguese");
    int numfunc, qtdfilhos;
    float numh, vlrh, salfunc, acres;
    cout<<"Informe o numero de funcionario ";
    cin>>numfunc;
    cout<<"Informe o numero de horas trabalhadas ";
    cin>>numh;
    cout<<"Informe o valor da hora trabalhada ";
    cin>>vlrh;
    cout<<"Informe a quantidade de filhos menores de 14 anos";
    cin>>qtdfilhos;
    salfunc=(numh*vlrh);
    acres=(salfunc*0.10) * qtdfilhos;
    cout<<"Seu salario é de: "<<(salfunc+acres);
}