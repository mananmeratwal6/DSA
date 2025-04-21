#include<iostream>
using namespace std;
void revcount(int i, int n ){
    if(i>n)
    return ;
    cout<<i<<endl;
    revcount(i+1,n);
    revcount(i+1,n);
    cout<<i<<endl;
}
int main()
{
    revcount(1,3);
    return 0;
}