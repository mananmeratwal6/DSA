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
    void traverse(){
        Node *ptr=start;
        while(ptr!=NULL){
            cout<<ptr->info<<endl;
            ptr=ptr->next;
        }
    }
};
int main()
{system("cls");
    LinkedList l1;
    int ch,item,numb;
    do{
        system("cls");
        cout<<"1. AddFirst\n6. Traverse\n8. Exit\nEnter your choice:";
        cin>>ch;
        switch(ch){
            case 1:
            cout<<"enter Number to add First: ";
            cin>>item;
            l1.addfirst(item);
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