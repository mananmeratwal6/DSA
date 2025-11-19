#include<iostream>
using namespace std;
class Node{
    public:
    int info;
    Node *next;
    Node(){
        this->info=0;
        this->next=NULL;
    }
    Node(int info){
        this->info=info;
        this->next=NULL;
    }
    Node(int info,Node *next){
        this->info=info;
        this->next=next;
    }
};
class LinkedList{
    public:
    Node *start;
    LinkedList()
    {
        start=NULL;
    }
    void addfirst(int info){
        Node *newNode=new Node(info);
        newNode->next=start;
        start=newNode;
       }
       void addlast(int info){
        Node *newNode=new Node(info);
        Node *ptr;
        while (ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=newNode;
        newNode->next=NULL;
        
       }
       void addafter(int info,int val){
        Node *newNode=new Node(info);
        Node *ptr=start;
        while(ptr->info==val){
            ptr=ptr->next;
        }
        newNode->next=ptr->next;
        ptr->next=newNode;
       }
       void addbefore(int info,int val){
        Node *newNode=new Node(info);
        Node *ptr=start;
    Node *preptr=NULL;
    while(ptr!=NULL&&ptr->info!=val){
        preptr=ptr;
        ptr=ptr->next;
    }
    newNode->next=ptr;
    preptr->next=newNode;
       }
    void traverse(){
        Node *ptr;
        ptr=start;
        while (ptr!=NULL)
        {
            cout<<ptr->info;
            ptr=ptr->next;
        }
    }
};
int main()
{LinkedList l1;
    l1.addfirst(10);
    l1.addfirst(20);
    l1.addlast(30);
    l1.addafter(40,20);
    l1.addbefore(50,20);
    l1.traverse();
    
    return 0;
}