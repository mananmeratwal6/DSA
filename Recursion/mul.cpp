#include<iostream>
using namespace std;
int sum(int n){
    if(n<=9)
    return n;
    return n%10+sum(n/10);
    
}
int main()
{
    int n;
    cout<<"enter no.";
    cin>>n;
    int ans=sum(n);
    cout<<ans;

    return 0;
}