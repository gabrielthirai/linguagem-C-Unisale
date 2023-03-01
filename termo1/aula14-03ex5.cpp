#include <iostream>
#include <locale>
using namespace std;

main()
{
    setlocale(LC_ALL, "Portuguese");
    float valhr, numaula, percinss;
    cout<<"Informe o valor da aula aula";
    cin>>valhr;
    cout<<"Informe o numero de aulas dadas no mês";
    cin>>numaula;
    cout<<"Informe o percentual de desconto do INSS";
    cin>>percinss;
    cout<<"O salário liquido será de "<< ((valhr*numaula)-percinss);
}