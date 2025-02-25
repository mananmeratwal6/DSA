#include<iostream>
using namespace std;
void binary(int n){
    if(n==0)
    return ;
   
    binary(n/2);
    cout<<n%2;
}
int main()
{
    int x;
    cout<<"enter number";
    cin>>x;
    binary(x);
    return 0;
}