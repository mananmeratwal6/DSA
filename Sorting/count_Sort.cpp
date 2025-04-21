#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void count_sort(vector<int> &a){
    int n=a.size();
    int max=*max_element(a.begin(),a.end());
    int *freq=new int[n];
    for(int i=0;i<max+1;i++)
    freq[i]=0;
    for(int i=0;i<n;i++)
    freq[a[i]]++;
    for(int j=0,i=0;j<max+1;)
    if(freq[j]==0){
    j++;}
    else{
    a[i++]=j;
    freq[j]--;
    }

}
int main()
{
    int n;
    cout<<"how many element in array";
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cout<<"Enter Element "<<i+1<<":";
        cin>>a[i];
    }
    count_sort(a);
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }

    return 0;
}
