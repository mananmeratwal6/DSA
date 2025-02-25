#include<iostream>
using namespace std;

int main()
{ int static i=1;
    cout<<"matrix"<<endl;
    i++;
    if(i<6){
    main();}
    return 0;
}