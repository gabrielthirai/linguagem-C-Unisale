#include <iostream>
#include <locale>
using namespace std;

main()
{
    setlocale(LC_ALL, "Portuguese");
    int num;
    cout<<"Digite um numero inteiro";
    cin>>num;
    cout<<"O Antecessor é "<<(num-1);
    cout<<"O Sucessor é "<<(num+1);
}