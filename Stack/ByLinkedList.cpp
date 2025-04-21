#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class Node{
    public:
    int info;
    Node *next;
    Node(){
        info=0;
        next=NULL;
    }
    Node(int info)
    {
        this->info=info;
        next=NULL;
    }
    Node(int info,Node *next){
        this->info=info;
        this->next=next;
    }

};
class Stack{
    Node *top;
    public:
    Stack(){
        top=NULL;
    }
    void push(int item){
        Node *newNode=new Node(item);
        newNode->next=top;
        top=newNode;
         
    }
    int pop(){
        Node *ptr=top;
        if(top==NULL){
            cout<<"Stack Underflow..."<<endl;
            return -1;
            }
            
        top=top->next;
        int item=ptr->info;
        delete ptr;
        return item;
        
    }
    int peep(){
        if(top==NULL){
            cout<<"Stack underflow"<<endl;
            return -1;
        }
        Node *ptr=top;
        top=top->next;
        int item=ptr->info;
        return item;
    }
    bool isEmpty(){
        return top==NULL;
        }
    void display(){
        Node *ptr=top;
        while(ptr!=NULL){
            cout<<ptr->info<<endl;
            ptr=ptr->next;
        }
    }
};
int main()
{Stack s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.pop();
    cout<<s1.peep();
    // s1.display();

    return 0;
}