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
void addLast(int item){
    Node *newnode;
    newnode=new Node(item);
    if(start==NULL)
    start=newnode;
    else{
    Node *ptr=start;
    while(ptr->next != NULL){
    ptr=ptr->next;
    }
    ptr->next=newnode;
    }
    }
void traverse(){
    Node *ptr;
    ptr=start;
    while(ptr!=NULL){
        cout<<ptr->info;
        ptr=ptr->next;
    }

}
};
int main()
{
    LinkedList l1;

    l1.addLast(60);
    l1.traverse();
    

    return 0;
}