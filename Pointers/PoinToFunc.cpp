#include<iostream>
using namespace std;
int max(int x,int y){
    return x>y?x:y;
}
int main()
{int (*p)(int,int);
    p=&max;
    cout<<(*p)(4,5);
    
    return 0;
}