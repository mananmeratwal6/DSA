#include<iostream>
using namespace std;
 class Node{
    public:
    int info,priority;
    Node *next;
    
    Node(){
        info=priority=0;
        next=NULL;
    }
    Node(int info,int priority){
        this->info=info;
        this->priority=priority;
        next=NULL;
    }
 };
 class Queue{
    public:
    Node *start;
    Queue(){
        start=NULL;
    }
    void DPQ(int info,int priority){
        Node *newNode=new Node(info,priority);
        Node *ptr=start,*preptr=NULL;
        if(start==NULL||priority>ptr->priority){
            newNode->next=start;
            start=newNode;
        }
        else{
            while(ptr!=NULL&&priority<=ptr->priority){
              preptr=ptr;
              ptr=ptr->next;
            } 
            preptr->next=newNode;
            newNode->next=ptr;

        }
    }
    int deque(){
        Node *ptr=start;
        if(ptr==NULL){
            return -1;
        }
        int item=ptr->info;
        start=start->next;
        delete ptr;
        return item;
    }
    void traverse(){
        Node *ptr=start;
        while(ptr!=NULL){
            cout<<ptr->info<<"\t";
            ptr=ptr->next;
        }
    }
    
 };
 
int main()
{Queue q1;
    q1.DPQ(10,2);
    q1.DPQ(20,1);
    q1.DPQ(30,3);
    q1.traverse();
    q1.deque();
    q1.traverse();

    
    return 0;
}