#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<int> v1={10,20,30,40,50};
vector<int> v2={5,6,7,8};
v1.swap(v2);
for(int e:v1)
cout<<e<<"\t";
cout<<endl;
cout<<v1[3];
return 0;
}