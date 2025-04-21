#include<iostream>
using namespace std;

int main()
{
    int n1=0,n2=1,sum=0,n;
    cout<<"enter no.";
    cin>>n;
    for(int i=0;i<n;i++){
        sum=n1+n2;
        n1=n2;
        n2=sum;
        cout<<n1;
    }
    cout<<sum<<endl;
    return 0;
}