#include <iostream>
#include <locale>
using namespace std;

main()
{
    setlocale(LC_ALL, "Portuguese");
    int anos, meses, dias, idade;
    
    cout<<"Informe seus anos";
    cin>>anos;
    cout<<"Informe seus meses";
    cin>>meses;
    cout<<"Informe seus dias";
    cin>>dias;
    
    cout<<(anos*365+meses*30+dias);
}