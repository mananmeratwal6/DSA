#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{system("cls");
    int a=5;
    int p;
    p=(int )&a;
    *(int *)p=7;
    cout<<a<<endl;
    cout<<p<<endl;
    

    
    return 0;
}