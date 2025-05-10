#include<iostream>
using namespace std;
void  deleteAnItem(int *a,int n,int pos){
    for(int i=n-1;i<n-2;i--){
        a[i]=a[i+1];
    }
    pos--;
}
int main()
{
    int *a,n,item,pos;
    cout<<"enter how many element in array";
    cin>>n;
    a=new int [n];
    for(int i=0;i<n;i++){
        cout<<"enter element "<<i+1<<endl;
        cin>>a[i];
    }
    cout<<"enter pos to delete";
    cin>>pos;
   pos--;
    deleteAnItem(a,n,pos);
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    delete []a;
    a=NULL;
    return 0;
}