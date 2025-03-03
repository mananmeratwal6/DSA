#include<iostream>
#include<vector>
using namespace std;
void bubble_sort(vector<int> &a){
    for(int i=1;i<a.size()-1;i++){
        for(int j=0;j<a.size()-i;j++){
            if(a[j]>a[j+1])
            swap(a[j],a[j+1]);
         }
    }
}
int main()
{int n;
    cout<<"enter how many no of elemet  in array";
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cout<<"enter element "<<i+1<<endl;
        cin>>a[i];
    }
    bubble_sort(a);
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    
    return 0;
}