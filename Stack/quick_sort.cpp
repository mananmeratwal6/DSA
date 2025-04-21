#include<iostream>
#include<algorithm>
using namespace std;
int partition(int *a,int lb,int ub){
    int pivot=a[lb];
    int down=lb,up=ub;
    while(down<up){
        while(a[down]<=pivot&& down<up){
            down++;
        }
        while(a[up]>pivot){
            up--;
        }
        if(down<up)
        swap(a[down],a[up]);
    }
    a[lb]=a[up];
    a[up]=pivot;
    return up;
}
void quick_sort(int *a,int lb,int ub){
    if(lb>=ub){
    return;}
    int mid=partition(a,lb,ub);
    quick_sort(a,lb,mid-1);
    quick_sort(a,mid+1,ub);
}
int main()
{
    int *a,n;
    cout<<"Enter How many Element in Array";
    cin>>n;
    a=new int[n];
    for(int i=0;i<n;i++){
        cout<<"Enter Element : "<<i+1<<endl;
        cin>>a[i];
    }
    quick_sort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
    delete []a;
    return 0;
}