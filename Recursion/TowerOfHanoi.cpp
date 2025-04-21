#include<iostream>
using namespace std;
int cnt=0;
void Tower(int n,char beg,char aux,char end){
    if(n==1){
    cout<<"steps "<<++cnt <<" disk "<<n<<" move from "<<beg<<" to "<< end<<endl;
    return;}
    Tower(n-1,beg,end,aux);
    cout<<"steps "<<++cnt <<" disk "<<n<<" move form "<<beg<<" to "<< end<<endl;
    Tower(n-1,aux,beg,end);
}
int main()
{
    int n;
    cout<<"how no. of disk :";
    cin>>n;
    Tower(n,'A','B','C');
    return 0;
}