#include<iostream>
using namespace std;
  void reverse(int *a,int n){
    int i=0;
    int j=n-1;
    while(i<j){
        swap(a[i],a[j]);
        i++;
        j--;
    }
    return;
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
    reverse(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
    return 0;
}