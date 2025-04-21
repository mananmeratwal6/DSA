#include<iostream>
using namespace std;
int sumDigit(int num){
    if(num<10)
    return num;
    return num%10 + sumDigit(num/10);

}
int main()
{
    int n;
    cout<<"enter number";
    cin>>n;
    int ans=sumDigit(n);
    cout<<ans;
    return 0;
}