#include<iostream>
using namespace std;
void revcount(int i,int n){
    if(i>n)
    return ;
    cout<<n;
    revcount(i,n-1);
}
int main()
{
    revcount(1,5);
    return 0;
}