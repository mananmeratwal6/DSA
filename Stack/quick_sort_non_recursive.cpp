#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
int partition(vector<int> &a,int lb,int ub){
    int pivot=a[lb];
    int  down=lb,up=ub;
    while(down<up){
        while(a[down]<=pivot&&down<up){
            down++;
        }
        while(a[up]>pivot){
            up--;
        }
        if(down<up){
            swap(a[down],a[up]);
        }
    }
    swap(a[lb],a[up]);
    return up;
}
void quick_sort( vector<int> &a,int lb,int ub){
     stack<int> stklb,stkub;
     if(lb<ub){
        stklb.push(lb);
        stkub.push(ub);
     }
     while (!stklb.empty())
     {
         lb = stklb.top();stklb.pop();
         ub = stkub.top();stkub.pop();
         int mid=partition(a,lb,ub);
         if(lb<mid-1){
            stklb.push(lb);
            stkub.push(mid-1);
         }
         if(ub>mid+1){
            stklb.push(ub);
            stkub.push(mid+1);
         }

     }
     
}
int main()
{
    int n;
    
    cout<<"Enter how many element in array";
    cin>>n;
    vector<int>v1(n);
    for(int i=0;i<n;i++){
        cout<<"Enter Element : "<<i+1;
        cin>>v1[i];
    }
    quick_sort(v1,0,n-1);
    for(int i=0;i<n;i++){
        cout<<v1[i]<<"\t";
    }
    return 0;
}