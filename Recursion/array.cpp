#include<iostream>
using namespace std;
void display(int *a,int i,int j){
    if(i>=j)
    return ;
    cout<<a[i];
    return display(a,i+1,j);
}
int main()
{
    int *a,n;
    cout<<"enter how many elements in array";
    cin>>n;
a=new int [n];
for(int i=0;i<n;i++){
    cout<<"enter element ";
    cin>>a[i];
}
display(a,0,n);

    return 0;
}