#include<iostream>
using namespace std;
class Node{
    public:
    int info;
    Node *next;
};
int main()
{Node *p1,*p2;
    p1=new Node();
    p2=new Node();
    p1->info=20;
    p1->next=p2;
    p2->info=30;
    p2->next=NULL;
    cout<<p1->info<<p1->next->info;
    delete p1;
    delete p2;
    return 0;
}