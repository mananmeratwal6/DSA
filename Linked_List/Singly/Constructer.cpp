#include<bits/stdc++.h>
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
{
    Node *n1,*n2;
    n2=new Node(20);
    n1=new Node(10,n2);
    cout<<n1->info;
    cout<<n1->next->info;
    
    delete n1;
    delete n2;

    return 0;
}