#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    system("cls");
    float a=5.4f;
    char *p;
    p=(char *)&a;
    *p=a;
    cout<<p<<endl;
    cout<<a;
    return 0;
}