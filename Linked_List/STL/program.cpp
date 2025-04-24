#include<iostream>
#include<list>
// #include<forward_list>
#include<vector>
using namespace std;

int main()
{list<int> l1;
    l1.push_front(30);
    l1.push_front(20);
    // l1.pop_front();
    l1.push_back(10);
    l1.push_back(50);
    // l1.pop_back();
    // auto itr=l1.begin();
    // advance(itr,2);
    // l1.insert(itr,35);
    auto itr=l1.end();
    advance(itr,-2);
    l1.insert(itr,45);
    for(int e:l1)
    cout<<e<<"\t";
    cout<<l1.front()<<endl;
    cout<<l1.back()<<endl;
    l1.remove(45);
    // for(int e:l1)
    // cout<<e<<"\t";
  
    l1.sort();
    l1.reverse();
    // auto itr=l1.begin();
    // advance(itr,2);
    // l1.insert_after(itr,35);//insert after
    l1.clear();
    for(auto itr2=l1.begin();itr2!=l1.end();itr2++){
        cout<<*itr2<<"\t";
    }
    return 0;
}