#include<iostream>
using namespace std;
int fibbo(int n){
    if(n==0||n==1)
    return n;
    return fibbo(n-1)+fibbo(n-2);
}
int main()
{
   int n;
   cout<<"enter the nth term";
   cin>>n;
   int ans =fibbo(n);
   cout<<ans;
    return 0;
}