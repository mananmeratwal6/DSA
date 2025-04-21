#include<iostream>
#include<vector>
using namespace std;

void merging(vector<int> &a,int lb1,int ub1,int lb2,int ub2,vector<int> &t){
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
void merge_sort(vector<int> &a,int lb,int ub,vector<int> &t){
    if(lb>=ub)
    return;
    int mid=(lb+ub)/2;
    merge_sort(a,lb,mid,t);
    merge_sort(a,mid+1,ub,t);
    merging(a,lb,mid,mid+1,ub,t);
}
int main()
{
    int n;
    cout<<"Enter how many element in array";
    cin>>n;
    vector<int >a(n),t(n);
   
    for(int i=0;i<n;i++){
        cout<<"Enter Element "<<i+1<<":";
        cin>>a[i];
    }
    merge_sort(a,0,n-1,t);
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
    return 0;
}