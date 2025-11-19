#include<iostream>
#include<set>
using namespace std;

int main()
{set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(5);
    s.insert(6);
    s.insert(12);
cout<<"lower bound = "<<*(s.lower_bound(5))<<endl;
cout<<"upper bound = "<<*(s.upper_bound(5))<<endl;
    for(int val:s){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}