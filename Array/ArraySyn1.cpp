#include<iostream>

using namespace std;

int main()
{int a[]={10,20,30,40,50};
int n=sizeof(a)/sizeof(a[0]);
for(int i=0;i<n;i++){
    cout<<a[i]<<"\t";
}
    
    return 0;
}