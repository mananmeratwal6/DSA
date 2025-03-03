#include<iostream>
#include <vector>
using namespace std;
  void selection_Sort( vector<int> &a){
    int n=a.size();
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                swap(a[i],a[j]);
            }
        }
    }
  }
int main()
{
    int n;
    cout<<"Enter how many element in array";
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cout<<"Enter Element "<<i+1;
        cin>>a[i];
    }
    selection_Sort(a);
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}