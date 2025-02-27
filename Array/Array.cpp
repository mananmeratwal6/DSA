#include<iostream>
using namespace std;

int main()
{
    int n;
cout<<"Enter how many numbers:";
cin>>n;
int *a=new int[n];
//input
for(int i=0;i<n;i++){
cout<<"Enter element "<<i+1<<":";
cin>>a[i];
}

int *t=new int [n+2];
for(int i=0;i<n;i++){
    t[i]=a[i];
}
delete []a;
a=t;
for(int i=n;i<n+2;i++){
    cout<<"Enter Element "<<i+1<<":";
    cin>>a[i];
}
for(int i=0;i<n+2;i++)
cout<<a[i]<<endl;
    
    return 0;
}