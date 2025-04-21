#include<iostream>
#include<vector>
using namespace std;
int *t;
void merge(vector<int>&a,int lb1,int ub1,int lb2,int ub2){
    int i,j,k;
    for(i=lb1,j=lb2,k=lb1;i<=ub1&&j<=ub2;k++){
        if(a[i]<a[j])
        t[k]=a[i++];
        else
        t[k]=a[j++];
    }
    while(i<=ub1){
      t[k++]=a[i++];
    }
    while(j<=ub2){
        t[k++]=a[j++];
      }
      for(i=0;i<=ub2;i++){
        a[i]=t[i];
      }
}
void merge_sort_break(vector<int> &a){
int n=a.size();
int lb1,lb2,ub1,ub2;
for(int sz=1;sz<n;sz=sz*2){
    lb1=0;
    while(lb1+sz<n){
    lb2=lb1+sz;
    ub1=lb2-1;
    ub2=ub1+sz<n?ub1+sz:n-1;
    merge(a,lb1,ub1,lb2,ub2);
    lb1=ub2+1;
    }
}
}
int main()
{
    int n;
    cout<<"How many element in array";
    cin>>n;
    t=new int[n];
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cout<<"Enter Element "<<i+1;
        cin>>a[i];
    }
    merge_sort_break(a);
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    return 0;
}