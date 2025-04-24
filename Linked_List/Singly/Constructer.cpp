#include<iostream>

using namespace std;
class Node{
    public:
    int info;
    Node *next;
    Node(){
        info=0;
        next=NULL;
    }
    Node(int info){
        this->info=info;
        next=NULL;
    }
    Node(int info,Node *next){
        this->info=info;
        this->next=next;
    }
};
int main()
{Node *p1,*p2;
    p2=new Node(20);
    p1=new Node(10,p2);
    cout<<p1->info<<endl;
    cout<<p1->next->info;
    return 0;
}