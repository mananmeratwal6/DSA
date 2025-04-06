#include<iostream>
#include<stdlib.h>
#include<conio.h>
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
    Node *tail;
    public:
    LinkedList(){
        tail=NULL;
    }
    void addFirst(int item){
        Node *newNode=new Node(item);
        if(tail==NULL){
            tail=newNode;
            tail->next=newNode;
        }
        else{
            newNode->next=tail->next;
            tail->next=newNode;
        }
    }
    void addlast(int item){
        Node *newNode=new Node(item);
        if(tail==NULL){
            tail=newNode;
            tail->next=newNode;
        }
        else{
            newNode->next=tail->next;
            tail->next=newNode;
            tail=newNode;
            
        }
    }

    void traverse(){
        Node *ptr=tail->next;
        if(tail==NULL){
            cout<<"Empty"<<endl;
            return;
        }
        do{
            cout<<ptr->info<<endl;
            ptr=ptr->next;
        }while(ptr!=tail->next);
        
    }
};
int main()
{system("cls");
    LinkedList l1;
    int ch,item,numb;
    do{
        system("cls");
        cout<<"1. AddFirst\n2. AddLast\n3. AddAfter\n6. Traverse\n8. Exit\nEnter your choice:";
        cin>>ch;
        switch(ch){
            case 1:
            cout<<"enter Number to add First: ";
            cin>>item;
            l1.addFirst(item);
            break;
            case 2:
            cout<<"enter Number to add last: ";
            cin>>item;
            l1.addlast(item);
            break;
            case 6:
            l1.traverse();
            break;
            case 8:
            break;
            default:
            cout<<"invalid choice...."<<endl;
        }
        getch();
    }while(ch!=8);
    
    return 0;
}