#include <iostream>
#include <locale>
using namespace std;

main()
{
    setlocale(LC_ALL, "Portuguese");
    float h;
    int sexo;
    cout<<"Digite a sua altura";
    cin>>h;
    cout<<"Digite o seu sexo (1 Homens) (0 Mulheres)";
    cin>>sexo;
    if(sexo==1){
        cout<<(72.7*h-58);
    }
    else if (sexo==0){
        cout<<(62.1*h-44.7);
    }
    else if (sexo!=1 and sexo!=0 ){
        cout<<"Digite novamente";
    }
}