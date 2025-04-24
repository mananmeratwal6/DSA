#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
class Node{
    public:
    int info;
    Node *prev,*next;
    Node(){
        info=0;
        prev=next=NULL;
    }
    Node(int info){
        this->info=info;
        prev=next=NULL;
    }
    Node(int info,Node *prev,Node*next){
        this->info=info;
        this->next=next;
        this->prev=prev;
    }

};
class LinkedList{
    Node *start;
    public:
    LinkedList(){
        start=NULL;
    }
    void addfirst(int info){
        Node *newNode=new Node(info);
        if(start==NULL){
            start=newNode;
        }
        else{
            newNode->next=start;
            start->prev=newNode;
            start=newNode;
            newNode->prev=NULL;
        }
    }
    void addLast(int info){
        Node *newNode=new Node(info);
        if(start==NULL){
            start=newNode;
        }
        Node *ptr=start;
        while (ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=newNode;
        newNode->prev=ptr;
        newNode->next=NULL;
        
    }
    void addAfter(int numb,int info){
        Node *newNode=new Node(info);
        Node *ptr=start;
        while(ptr!=NULL&&ptr->info!=numb){
            ptr=ptr->next;
        }
        if(ptr==NULL){
            cout<<"item Not found";
            return;
        }
        newNode->next=ptr->next;
        if(ptr->next!=NULL)
        ptr->next->prev=newNode;
        ptr->next=newNode;
        newNode->prev=ptr;
    }
    void addBefore(int numb,int info){
        Node *newNode=new Node(info);
        Node *preptr=NULL;
        Node *ptr=start;
        while(ptr!=NULL&&ptr->info!=numb){
            preptr=ptr;
            ptr=ptr->next;
        }
        if(ptr==NULL){
            cout<<"Number not found...";
            return;
            }
        if(ptr==start){
            newNode->next=ptr;
            ptr->prev=newNode;
            start=newNode;
        }
        else{
        preptr->next=newNode;
        newNode->prev=preptr;
        newNode->next=ptr;
        ptr->prev=newNode;
        }
    }
    void traverse(){
        Node *ptr=start;
        while(ptr!=NULL){
            cout<<ptr->info<<endl;
            ptr=ptr->next;
        }
    }
    ~LinkedList(){
        Node *ptr;
        while(start!=NULL){
        ptr=start;
        start=start->next;
        delete ptr;
        }
        }
};
int main()
{system("cls");
    LinkedList l1;
    int ch,item,numb;
    do{
        system("cls");
        cout<<"1. AddFirst\n2. AddLast\n3. AddAfter\n4. AddBefore\n6. Traverse\n8. Exit\nEnter your choice:";
        cin>>ch;
        switch(ch){
            case 1:
            cout<<"enter Number to add First: ";
            cin>>item;
            l1.addfirst(item);
            break;
            case 2:
            cout<<"enter Number to add last: ";
            cin>>item;
            l1.addLast(item);
            break;
            case 3:
            cout<<"enter numb and info";
            cin>>numb>>item;
            l1.addAfter(numb,item);
            break;
            case 4:
            cout<<"enter numb and info";
            cin>>numb>>item;
            l1.addBefore(numb,item);
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