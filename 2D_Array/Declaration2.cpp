#include<iostream>
using namespace std;
void input(int **a,int r,int c){
 for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
        cout<<"Enter Element "<<i+1<<","<<j+1;
        cin>>a[i][j];
    }
 }
}
void output(int **a, int r,int c){
    for(int i=0;i<r;i++){
       for(int j=0;j<c;j++){
           cout<<a[i][j];
       }
       cout<<endl;
    }
   }
int main()
{ 
    int **a,r,c;
    cout<<"Enter rows and columns";
    cin>>r>>c;
    a=new int *[r];
    for(int i=0;i<r;i++){
        a[i]=new int [r];
    }
    input(a,r,c);
    output(a,r,c);
    for(int i=0;i<r;i++){
        delete []a;
        a=NULL;
    }
    return 0;
}