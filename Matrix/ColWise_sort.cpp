#include<iostream>
#include<vector>
using namespace std;
 void row_sort(vector<vector<int>> &a,int r,int c){
    for(int k=0;k<c;k++){
        for(int i=0;i<r-1;i++){
            for(int j=i+1;j<r;j++){
                if(a[i][k]>a[j][k])
                swap(a[i][k],a[j][k]);
            }
        }
    }
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
    row_sort(a,r,c);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }

    return 0;
}