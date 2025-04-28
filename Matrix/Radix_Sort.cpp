#include<iostream>
#include<vector>
using namespace std;
int maxx(vector<int> &a,int n){
    int max=0;
    for(int i=0;i<n;i++){
        if(a[i]>max)
        max=a[i];
    }
   
    return max;
}
int count(int mx){
    int cnt=0;
    while(mx!=0){
        mx=mx/10;
        cnt++;
    }
    
    return cnt;
}
int k_digit(int n,int k){
    int digit;
    for(int i=1;i<=k;i++){
         digit=n%10;
        n=n/10;
    }
    
    return digit;
}
void radix_sort(vector<int> &a,int n){
int mx=maxx(a,n);
int count_digit=count(mx);
for(int k=1;k<=count_digit;k++){
    vector<vector<int>> m(10,vector<int> (n,-1));
    for(int i=0;i<n;i++){
  int row=k_digit(a[i],k);
  int col=0;
  while(m[row][col]!=-1){
    col++;
    }
    m[row][col]=a[i];
}
int l=0;
for(int i=0;i<10;i++){
    for(int j=0;j<n;j++){
        if(m[i][j]!=-1)
        a[l++]=m[i][j];
    }
}
}
}
int main()
{
    int n;
    cout<<"How many element in array";
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cout<<"Enter Element "<<i+1;
        cin>>a[i];
    }
    radix_sort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    return 0;
}