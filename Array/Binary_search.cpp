#include<iostream>
#include<vector>
using namespace std;
   int  Binary_search(vector<int> a,int item){
    int low=0;
    int high=a.size()-1;
    while(low<=high)
        {
            int mid=(low+high)/2;
            if(a[mid]==item){
            return mid;}
            else if(item>a[mid]){
            low=mid+1;}
            else{
            high=mid-1;}
        }
        return 0;
    }
int main()
{
    int n,item,pos;
    cout<<"Enter How many element in array";
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cout<<"Enter Element "<<i+1<<":";
        cin>>a[i];
    }
    cout<<"Enter Element to search";
    cin>>item;
    pos=Binary_search(a,item);
    if(pos!=0)
    cout<<"item found at position at"<<pos+1;
    else
    cout<<"item not found";
    return 0;
}