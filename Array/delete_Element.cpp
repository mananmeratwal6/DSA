#include<iostream>
using namespace std;
void delete_element(int *a,int n,int pos){
    for(int i=pos;i<=n-2;i++){
        a[i]=a[i+1];
    }
}
int main()
{
    int *a,n,item,pos;
    cout<<"Enter How many element in array";
    cin>>n;
    a=new int [n+1];
    for(int i=0;i<n;i++){
        cout<<"Enter Element "<<i+1<<":";
        cin>>a[i];
    }
    cout<<"Enter position ";
    cin>>pos;
    pos--;
    delete_element(a,n,pos);
    n--;
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    return 0;
}