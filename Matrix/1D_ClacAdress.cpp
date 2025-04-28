#include<iostream>
#include<vector>
using namespace std;
void calcAddress(int base,int k,int lb,int w){
    int loc=base+(k-lb)*w;
    cout<<loc;
}
int main()
{int n;
    cout<<"How many element in array";
    cin>>n;
    vector<int>a(n);
  for(int i=0;i<n;i++){
    cout<<"ENter element "<<i+1;
    cin>>a[i];
  }
  int base=100;
  int k;
  cout<<"Index of current element";
  cin>>k;
  int lb=0;
  int widht=4;
    calcAddress(base,k,lb,widht);
    return 0;
}