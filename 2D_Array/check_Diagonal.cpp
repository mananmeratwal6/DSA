#include<iostream>
using namespace std;
int i,j;

    void input(int **a,int r,int c){
        for( i=0;i<r;i++){
           for( j=0;j<c;j++){
               cout<<"Enter Element "<<i+1<<","<<j+1;
               cin>>a[i][j];
           }
        }
       }
       bool check_palindromw(int **a,int r,int c){
        if(r==c){
            if((i==j)!=0){
                return true;
            }
        }
        return false;
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
           int k=check_palindromw(a,r,c);
           cout<<k;
           for(int i=0;i<r;i++){
               delete []a;
               a=NULL;
           }
           return 0;
       }

