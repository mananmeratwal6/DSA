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
class LinkedList{
private:
Node *start;
public:
LinkedList(){
    start=NULL;
}
void addFirst(int data){
    Node * newNode;
    newNode=new Node(data);
    newNode->next=start;
    start=newNode;
}
void traverse(){
    Node *ptr;
    while(ptr!=NULL){
        cout<<ptr->info;
        ptr=ptr->next;
    }

}
};
int main()
{
    LinkedList l1;
    l1.addFirst(50);
    l1.addFirst(40);
    l1.addFirst(30);
    l1.addFirst(20);
    l1.addFirst(10);
    l1.traverse();
    

    return 0;
}