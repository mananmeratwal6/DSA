#include<iostream>
#include<algorithm>
using namespace std;

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
    int maxx=*max_element(a,a+n);
    cout<<"Max Element is"<<maxx;
    return 0;
}