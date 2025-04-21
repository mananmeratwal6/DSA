#include<iostream>
using namespace std;
int dp[100]={0};
int fibbo(int n){
    if(n==0||n==1)
    return n;
   
    if(dp[n]==0){
    dp[n]= fibbo(n-1)+fibbo(n-2);
    }
    return dp[n];
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