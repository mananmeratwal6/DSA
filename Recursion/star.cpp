#include<iostream>
using namespace std;
void col(int j,int i){
    if(j>i)
    return ;
    
    cout<<j;
 
    col(j+1,i);
    
}
void row(int i,int n){
    if(i>n)
    return ;
  
    col(1,i);
    cout<<endl;
    row(i+1,n);
}
int main()
{
    row(1,5);
    return 0;
}