#include<iostream>
using namespace std;

int main()
{
    int a[100],n;
    cout<<"Enter how many element in Array";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter Element "<<i+1;
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
    return 0;
}