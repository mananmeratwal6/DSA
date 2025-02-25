#include<iostream>
using namespace std;
int sum(int n){
    if(n==0)
    return 0;
    return n+sum(n-1);
}
int main()
{int n1;
cout<<"enter a num";
cin>>n1;
    
    int ans=sum(n1);
    cout<<ans;
    return 0;
}