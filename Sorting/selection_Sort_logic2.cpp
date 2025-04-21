#include<iostream>
#include<vector>
#include<stdlib.h>
using namespace std;
void selection_Sort(vector<int> &a){
    int n=a.size(),minpos;
    
    for(int i=0;i<n-1;i++){
        minpos=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[minpos])
            minpos=j;
        }
        if(i!=minpos)
        swap(a[i],a[minpos]);
    }
}
int main()
{
    int n;
    cout<<"enter how many element in array";
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
     cout<<"enter element "<<i+1<<endl;
     cin>>a[i];
    }
    selection_Sort(a);
    for(int i=0;i<n;i++){
        cout<<a[i];
    }

    return 0;
}