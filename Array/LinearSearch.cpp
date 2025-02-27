#include<iostream>
using namespace std;
int linear_search(int *a,int n,int item){
    for(int i=0;i<n;i++){
        if(a[i]==item){
            return i;
        }
    }
    return 0;
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
    cout<<"Enter Element to search";
    cin>>item;
    pos=linear_search(a,n,item);
    if(pos!=0)
    cout<<"item found at position at"<<pos+1;
    else
    cout<<"item not found";
    return 0;
}