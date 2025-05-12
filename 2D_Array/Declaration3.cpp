#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int r,c;
    cout<<"Enter row and column";
    cin>>r>>c;
  vector<vector<int>> a(r,vector<int> (c));
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cout<<"Enter Element "<<i+1<<","<<j+1;
        cin>>a[i][j];
    }
 }
 for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cout<<a[i][j];
    }
    cout<<endl;
 }
    return 0;
}