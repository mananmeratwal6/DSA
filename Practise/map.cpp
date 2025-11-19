#include<iostream>
#include<map>
using namespace std;

int main()
{map<string,int> m;
    m["camera"]=30;
    m["tv"]=32;
    m["og"]=32;
    m["jack"]=32;
    m["fridge"]=333;
    m.insert({"fog",67});
    m.erase("og");
    for(auto p:m)
{
    cout<<p.first<<" "<<p.second<<endl;
}    
if(m.find("jack")!=m.end()){
cout<<"found"<<endl;
}else{
    cout<<"not found";
}

cout<<m.count("tv")<<endl;
cout<<m["camera"]<<endl;

    return 0;
}