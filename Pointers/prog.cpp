#include<iostream>
using namespace std;
int  inc(int *n){
  ++(*n);
  return *n;

}
int main()
{
  int a;
  cout<<"enter no.";
  cin>>a;
  inc(&a);
  cout<<a;
    return 0;
}