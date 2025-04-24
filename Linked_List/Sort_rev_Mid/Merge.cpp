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
        if (start == NULL) {
            start = newNode;
            return;
        }
    
        Node *ptr=start;
        while(ptr->next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=newNode;
        newNode->next=NULL;
    }
    void addAfter(int numb,int item){
        Node *newNode;
        newNode=new Node(item);
        Node *ptr;
        ptr=start;
        if(start==NULL){
            newNode->next=start;
            start=newNode;
            return;
        }
        
            while (ptr!=NULL&&ptr->info!=numb)
            {
               ptr=ptr->next;
            }
            if(ptr!=NULL){
            newNode->next=ptr->next;
            ptr->next=newNode;
            }
            else{
                cout<<"item Not found";
            }
            
        
    }
    // void addBefore(int numb,int item){
    //     Node *newNode=new Node(item);
    //     Node *preptr,*ptr;
    //     preptr=NULL;
    //     ptr=start;
    //     if(start==NULL)
    //     {
    //         newNode->next=start;
    //         start=newNode;
    //         return;
    //     }
    //     while(ptr!=NULL&&ptr->info!=numb){
    //         preptr=ptr;
    //         ptr=ptr->next;
    //     }
    //     if(ptr!=NULL)
    //     {
    //         if(ptr==start){
    //             newNode->next=start;
    //             start=newNode;
    //         }
    //         else{
    //             preptr->next=newNode;
    //             newNode->next=ptr;
    //         }
    //     }
    //     else{
    //         cout<<"Number Not found to insert";
    //     }
    // }
    void addBefore(int numb,int item ){
        if(numb==start->info){
            Node *newNode=new Node(item);
            newNode->next=start;
            start=newNode;
            return;
        }
        Node *ptr=start;
        while(ptr->next!=NULL&&ptr->next->info!=numb){
            ptr=ptr->next;
        }
        if(ptr->next==NULL){
            cout<<"Number not found";
            return;
        }
        Node *newNode;
        newNode=new Node(item);
        newNode->next=ptr->next;
        ptr->next=newNode;
    }
    void deleteNode(int numb){
        if(start==NULL){
        cout<<"list is empty"<<endl;
        return;
        }
        Node *ptr,*preptr;
        preptr=NULL;
        ptr=start;
        if(start->info==numb){
        start=start->next;
        delete ptr;
        return ;
        }
        
        while (ptr->next!=NULL&&ptr->info!=numb)
        {
           preptr=ptr;
           ptr=ptr->next;
        }
        if (ptr == NULL) {
            cout << "Node with value " << numb << " not found." << endl;
            return;
        }
    
        preptr->next=ptr->next;
        delete ptr;
        
    }
    void Sort(){
        Node *p1,*p2;
        for(p1=start;p1->next!=NULL;p1=p1->next){
            for(p2=p1->next;p2!=NULL;p2=p2->next){
                if(p1->info>p2->info)
                swap(p1->info,p2->info);
            }
        }
    }
    int Mid(){
        Node *slow=start,*fast=start;
        while(fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
            if(fast->next!=NULL)
            fast=fast->next;
        }
        return slow->info;
    }
    void merge(LinkedList l1,LinkedList l2){
        Node *p1=l1.start,*p2=l2.start;
        while(p1!=NULL&&p2!=NULL){
            if(p1->info<p2->info){
                this->addLast(p1->info);
                p1=p1->next;
            }
            else{
                this->addLast(p2->info);
                p2=p2->next;
            }
        }
        while(p1!=NULL){
            this->addLast(p1->info);
            p1=p1->next;
        }
        while(p2!=NULL){
            this->addLast(p2->info);
            p2=p2->next;
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
{system("cls");
    LinkedList l1,l2,l3;
    l1.addLast(10);
    l1.addLast(30);
    l1.addLast(50);
    l2.addLast(20);
    l2.addLast(40);
    l2.addLast(60);
    l3.merge(l1,l2);
    l3.traverse();

    
    return 0;
}