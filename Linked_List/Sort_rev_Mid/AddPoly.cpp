#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;
class Node{
    public:
    int coeff;
    int power;
    Node *next;
    Node(){
        coeff=power=0;
        next=NULL;
    }
    Node(int coeff,int power){
        this->coeff=coeff;
        this->power=power;
        next=NULL;
    }
    Node(int coeff,int power,Node *next){
        this->coeff=coeff;
        this->power=power;
        this->next=next;
    }
};
class LinkedList{
    Node *start;
    public:
    LinkedList(){
        start=NULL;
    }
    void addLast(int c,int p){
        Node *newNode=new Node(c,p);
        if(start==NULL)
        {
            start=newNode;
            return;
        }
        Node *ptr=start;
        while (ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=newNode;
        newNode->next=NULL;
        
    }
    void addPoly(LinkedList l1,LinkedList l2){
        Node *p1=l1.start,*p2=l2.start;
        while(p1!=NULL&&p2!=NULL){
            if(p1->power==p2->power){
                this->addLast(p1->coeff+p2->coeff,p1->power);
                p1=p1->next;
                p2=p2->next;
            }
            else if(p1->power>p2->power){
                this->addLast(p1->coeff,p1->power);
                p1=p1->next;
            }
            else{
                this->addLast(p2->coeff,p2->power);
                p2=p2->next;
            }
        }
        while (p1!=NULL)
        {
            this->addLast(p1->coeff,p1->power);
            p1=p1->next;
        }
        while (p2!=NULL)
        {
            this->addLast(p2->coeff,p2->power);
            p2=p2->next;
        }
        
    }
    void traverse(){
        Node *ptr=start;
        while(ptr!=NULL){
            if(ptr->coeff>=0)
            cout<<"+"<<ptr->coeff<<"x^"<<ptr->power;
            else
            cout<<ptr->coeff<<"x^"<<ptr->power;
            ptr=ptr->next;
        }
        cout<<endl;
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
    LinkedList l1,l2,l3;
    l1.addLast(5,3);
    l1.addLast(4,2);
    l1.addLast(7,1);
    l1.addLast(8,0);
    l2.addLast(8,3);
    l2.addLast(3,1);
    l2.addLast(2,0);
    l3.addPoly(l1,l2);
    l3.traverse();
    
    
    return 0;
}