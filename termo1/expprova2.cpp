#include<iostream>
using namespace std;

main()
{
    int a,b;
    cin>>a>>b;
    if(a>b){
        b=a+b;
    }
    else if (a<b){
        a=(b/2);
    }
    cout<<(a);
}