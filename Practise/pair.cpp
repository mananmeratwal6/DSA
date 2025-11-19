#include<iostream>
#include<vector>
using namespace std;

int main()
{pair<int,int>p={12,3};
cout<<p.first<<endl;
cout<<p.second<<endl;
pair<string,int>p1={"njdsnkj",3};
cout<<p1.first<<endl;
cout<<p.second<<endl;
pair<int,pair<char,int>>p2={2,{'d',3}};
    cout<<p2.first<<endl;
cout<<p2.second.first<<endl;
cout<<p2.second.second<<endl;

    return 0;
}