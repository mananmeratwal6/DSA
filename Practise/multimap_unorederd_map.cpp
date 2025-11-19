#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main()
{unordered_map<string,int> m;
    multimap<string,int>m2;
    m2.insert({"tv",90});
   m2.emplace("tv",45);
    m["bulb"]=45;
    m.insert({"camera",46});
    cout<<m["bulb"];
    for(auto p:m2){
        cout<<p.first<<" "<<p.second<<endl;
    }
    
    return 0;
}