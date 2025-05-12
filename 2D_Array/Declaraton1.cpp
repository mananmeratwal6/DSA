#include<iostream>
using namespace std;

int main()
{
    int r,c;
    cout<<"Enter rows and columns";
    cin>>r>>c;
    int a[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<"Enter Element "<<i+1<<","<<j+1;
            cin>>a[i][j];
        }
     }
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
     }
    return 0;
}