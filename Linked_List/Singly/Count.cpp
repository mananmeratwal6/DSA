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
    ptr=start;
    while(ptr!=NULL){
        cout<<ptr->info;
        ptr=ptr->next;
    }

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
{
    LinkedList l1;
    l1.addFirst(50);
    l1.addFirst(40);
    l1.addFirst(30);
    l1.addFirst(20);
    l1.addFirst(10);
    l1.traverse();
    cout<<l1.count()<<endl;

    return 0;
}