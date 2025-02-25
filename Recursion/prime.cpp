#include<iostream>
#include<stdlib.h>
using namespace std;


int main()
{
    
int n;
cout<<"enter no.";
cin>>n;
bool isprime =true  ;


for(int i=2;i<=n;i++){
if(n%i==0){
isprime=  false;
break;
}
}
if(isprime)
cout<<"prime no";
else
cout<<"not prime no.";
    return 0;
}