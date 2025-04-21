#include<iostream>
#include<vector>
using namespace std;
 void merge(vector<int>a, vector<int>b,vector<int> &c){
    int i,j,k;
    for(i=0,j=0,k=0; i<a.size() && j<b.size();k++){
        if(a[i]<b[j])
         c[k]=a[i++];
         else
         c[k]=b[j++];
    }
    while (i<a.size())
    {
        c[k++]=a[i++];
    }
    while (j<b.size())
    {
        c[k++]=b[j++];
    }
    
    
 }
int main()
{
    int n1,n2;
    cout<<"Enter how many element in array 1 and two";
    cin>>n1>>n2;
    vector<int>a(n1);
    for(int i=0;i<n1;i++){
        cout<<"Enter element "<<i+1;
        cin>>a[i];
    }
    vector<int>b(n2);
    for(int j=0;j<n2;j++){
        cout<<"Enter element "<<j+1;
        cin>>b[j];
    }
    vector<int>c(n1+n2);
    merge(a,b,c);
    for(int k=0;k<n1+n2;k++){
        cout<<c[k];
    }
    return 0;
}