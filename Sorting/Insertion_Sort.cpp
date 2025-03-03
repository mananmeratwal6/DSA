#include<iostream>
#include<vector>
using namespace std;
void insertion_Sort(vector<int> &a){
    int n=a.size(),i,j,item;
    for(i=1;i<n;i++){
        item=a[i];
        for(j=i-1;j>=0&&a[j]>item;j--){
            a[j+1]=a[j];
        }
        a[j+1]=item;
        
    }
}
int main()
{
    int n;
    cout<<"Enter how many Number in array"<<endl;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cout<<"Enter Element "<<i+1;
        cin>>a[i];
    }
    insertion_Sort(a);
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }

    return 0;
}