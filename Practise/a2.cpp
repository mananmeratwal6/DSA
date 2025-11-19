#include<iostream>
using namespace std;
void push(int n){
    Node *newNode=new Node(n);
    if(start==NULL){
        start=newNode;
    }
    newNode->next=start;
    start=newNode;
}
void pop(int n){
    if(start->info==n)
    del start;
    while(start!=NULL){
        start=start->next;
        if(start->info==n);
        start=start->next;
        int info=ptr->info;
        del ptr;
        return info;
    }
    
}
int main()
{
    
    return 0;
}