#include<iostream>
using namespace std;

int main()
{
    int a,b,olda;
    cout<<"enter no.";
    cin>>a>>b;
    while(!(a>b&&a%b==0)){
    olda=a;
    a=b;
    b=olda%b;
    }
    cout<<b;
    return 0;
}