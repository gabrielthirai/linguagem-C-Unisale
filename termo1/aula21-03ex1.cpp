#include <iostream>
#include <locale>
using namespace std;

main()
{
    setlocale(LC_ALL, "Portuguese");
    int n1,n2;
    cout<<"Digite o primeiro numero";
    cin>>n1;
    cout<<"Digite o segundo numero";
    cin>>n2;
    if(n1>n2)
    {
       cout<<(n1-n2); 
    }
    else if(n1<n2)
    {
        cout<<"o primeiro numero é menor que o segundo numero";
    }
}