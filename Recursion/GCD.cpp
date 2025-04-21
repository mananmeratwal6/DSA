#include<iostream>
using namespace std;
int GCD(int a,int b){
    if(a>b&&a%b==0)
    return b;
    return GCD(b,a%b);
}
int main()
{
    int a,b;
    cout<<"enter no.";
    cin>>a>>b;
    int ans =GCD(a,b);
    cout<<ans;
    return 0;
}