#include<iostream>
using namespace std;
 int max(int *a,int n){
    int maxx=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>maxx)
        maxx=a[i];
    }
    return maxx;
 }
int main()
{
    int *a,n;
    cout<<"enter how many element in array";
    cin>>n;
    a=new int [n];
    for(int i=0;i<n;i++){
        cout<<"Enter Element "<<i+1;
        cin>>a[i];
    }
    int maxx=max(a,n);
    cout<<"Max Element is"<<maxx;

    return 0;
}