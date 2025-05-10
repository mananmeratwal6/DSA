#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter how many numbers:";
    cin>>n;
    int a[n];
    //input
    for(int i=0;i<n;i++){
    cout<<"Enter element "<<i+1<<":";
    cin>>a[i];
    }
    for(int i=0;i<n/2;i++){
        swap(a[i],a[n-i-1]);
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
    
    return 0;
}