#include<iostream>
using namespace std;
 void sorted_new_element(int *a,int n,int item,int pos){
    if(pos>n||pos<0){
        cout<<"Invalid position";
        delete[]a;
        exit(1);
    }
    for(int i=n-1;i>=pos;i--){
        a[i+1]=a[i];
    }
    a[pos]=item;
    
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
    cout<<"Enter item and pos";
    cin>>item>>pos;
    pos--;
    sorted_new_element(a,n,item,pos);
    n++;
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    return 0;
}