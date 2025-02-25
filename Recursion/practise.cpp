#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n1,n2,n3,n4=0,cnt =0;
    cout<<"enter number";
    cin>>n1;
   int temp=n1; 
while(temp>0){
temp=temp/10;
cnt++;
}
temp=n1;
    while(temp>0){
      n2=temp%10;
      
      n3=pow(n2,cnt);
      n4=n4+n3;
      temp=temp/10;
    }
    cout<<n4;
    if(n4==n1)
    cout<<"Armpstrong no.";
    else
    cout<<"not";
    return 0;
}