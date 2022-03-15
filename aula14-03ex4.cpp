#include <iostream>
#include <locale>
using namespace std;

main()
{
    setlocale(LC_ALL, "Portuguese");
    float val, novoval;
    cout<<"Digite o valor do produto";
    cin>>val;
    novoval=val*0.09;
    cout<< novoval;
    cout<<"O desconto é de "<<(novoval-val);
}