#include<iostream>
using namespace std;
void count(int i,int n){
    if(i>n)
    return ;
    cout<<i;
    count(i+1,n);
}
int main()
{
    count(1,5);
    return 0;
}