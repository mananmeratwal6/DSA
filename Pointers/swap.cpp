#include<iostream>
using namespace std;
void swap(int **p3,int **p4){
    int t;
    t=**p3;
    **p3=**p4;
    **p4=t;
}
int main()
{
    int a=5,b=6;
    int *p1,*p2;
    p1=&a;
    p2=&b;
    swap(&p1,&p2);
    cout<<a<<b;
    return 0;
}