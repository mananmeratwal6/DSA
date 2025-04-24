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
    void addLast(int item){
        Node *newNode;
        newNode=new Node(item); 
        Node *ptr;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=newNode;
        newNode->next=NULL;
    }
    int count(){
        Node *ptr;
        ptr=start;
        int cnt=0;
        while(ptr!=NULL){
            cnt++;
            ptr=ptr->next;
        }
        return cnt;
    }
};
int main()
{LinkedList l1;
    l1.addFirst(10);
    l1.addFirst(20);
    l1.addLast(30);
    l1.addLast(40);
    cout<<"count is"<<l1.count()<<endl;
    l1.traverse();
    
    return 0;
}