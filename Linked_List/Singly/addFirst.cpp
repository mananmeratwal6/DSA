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
class LinkedList{
    Node *start;
    public:
    LinkedList(){
        start=NULL;
    }
    void addFirst(int item){
        Node *newNode;
        newNode =new Node(item);
        newNode->next=start;
        start=newNode;
    }
    void traverse(){
        Node *ptr;
        ptr=start;
        while(ptr!=NULL){
            cout<<ptr->info<<endl;
            ptr=ptr->next;
        }
    }
};
int main()
{LinkedList l1;
    l1.addFirst(10);
    l1.addFirst(20);
    l1.traverse();
    
    return 0;
}