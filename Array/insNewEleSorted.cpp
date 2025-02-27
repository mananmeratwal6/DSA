#include<iostream>
using namespace std;
 void sorted_new_element(int *a,int n,int item){
     int i;
    for(i=n-1;i>=0 && a[i]>item;i--){
        
        a[i+1]=a[i];
       
    }
    a[i+1]=item;
    
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
    cout<<"Enter item ";
    cin>>item;
    
    sorted_new_element(a,n,item);
    n++;
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    return 0;
}