#include<iostream>
using namespace std;

int main()
{
    int a=5;
    const int *p=&a;
   

    cout<<*p;

    return 0;
}