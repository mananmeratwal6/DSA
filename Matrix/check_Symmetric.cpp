#include<iostream>
#include<vector>
using namespace std;
bool check_diagonal(vector<vector<int>> &a,int r,int c){
    if(r!=c)
    return false;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(a[i][j]!=a[j][i])
            return false;
        }
    }
    return true;
}
int main()
{
    int r,c;
    cout<<"Enter How Many rows and cols";
    cin>>r>>c;
    vector<vector<int>> a(r,vector<int>(c));
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<"Enter Element "<<i+1<<","<<j+1;
            cin>>a[i][j];
        }
    }
   int k= check_diagonal(a,r,c);
  if(k==1)
  cout<<"Symmetric Matrix"<<endl;
  else
  cout<<"Not Symmetric Matrix"<<endl;
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cout<<a[i][j]<<"\t";
    }
    cout<<endl;
  }
    return 0;
}