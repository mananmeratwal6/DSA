#include<iostream>
using namespace std;

int main()
{
    int a[5];
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        cout<<"Enter Element "<<i+1;
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
    return 0;
}