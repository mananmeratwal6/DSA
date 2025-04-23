#include<iostream>
using namespace std;
class Node{
    public:
    int info;
    Node *next,*prev;
    Node(){
        info=0;
        next=prev=NULL;
    }
    Node(int info){
        this->info=info;
        next=prev=NULL;
    }
};
class Queue{
    public:
     Node *left,*right;
     Queue(){
        left=right=NULL;
     }
    void enque_left(int item){
    Node *newNode=new Node(item);
    if(left==NULL){
        right=left=newNode;
    }
    else{
        newNode->next=left;
        left->prev=newNode;
        left=newNode;
    }
    }
    void enque_right(int item){
        Node *newNode=new Node(item);
        if(right==NULL){
           left=right=newNode;
        }
        else{
            newNode->prev=right;
            right->next=newNode;
            right=newNode;
        }
        }
    int deque_left(){
        Node *ptr;
        ptr=left;
        if(left==NULL)
        return -1;
        if(left==right){
            left=right=NULL;
        }
        else{
            left=left->next;
            left->prev=NULL;
        }
        int item=ptr->info;
        delete ptr;
        return item;
        
    }
    int deque_right(){
        Node *ptr;
        ptr=right;
        if(right==NULL)
        return -1;
        if(left==right){
            left=right=NULL;
        }
        else{
            right=right->prev;
            right->next=NULL;
        }
        int item=ptr->info;
        delete ptr;
        return item;
        
    }
    void display(){
        Node *ptr=left;
        while(ptr!=NULL){
            cout<<ptr->info<<"\t";
            ptr=ptr->next;
        }
    }
};
int main()
{
    Queue q1;
    q1.enque_left(30);
    q1.enque_left(20);
    q1.enque_left(10);
    q1.enque_right(40);
    q1.enque_right(50);
    cout<<q1.deque_left()<<"item deleted";
    cout<<q1.deque_right()<<"item deleted";
    q1.display();
    
    return 0;
}