#include <iostream>
#include <locale>
using namespace std;

main()
{
    setlocale(LC_ALL, "Portuguese");
    float altura;
    cout<<"Informe a altura";
    cin>>altura;
    cout<<((72.7*altura)-58);
}