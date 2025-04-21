#include<iostream>
using namespace std;
int pow(int n,int p){
    if(p==0)
    return 1;
    return n*pow(n,p-1);
}
int main()
{
    int a,b;
    cout<<"enter a and b";
    cin>>a>>b;
    int ans=pow(a,b);
    cout<<ans;
    return 0;
}