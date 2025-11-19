#include<iostream>
#include<vector>
using namespace std;

int main()
{vector<pair<int,int>> p={{1,2},{3,4}};
p.push_back({2,4});
p.emplace_back(3,4);//create in-place object or pair automaticly
for(auto p1:p){
    cout<<p1.first<<" "<<p1.second<<endl;
}

    return 0;
}