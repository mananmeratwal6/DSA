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
    LinkedList l1;
    int ch,item,numb;
    do{
        system("cls");
        cout<<"1. AddFirst\n2. AddLast\n3. AddAfter\n4. AddBefore\n5. DelNode\n6. Traverse\n7. Count\n8. Exit\nEnter your choice:";
        cin>>ch;
        switch(ch){
            case 1:
            cout<<"Enter Number to Add First:";
            cin>>item;
            l1.addFirst(item);
            break;
            case 2:
            cout<<"Enter Number to Add last:";
            cin>>item;
            l1.addLast(item);
            break;
            case 3:
            cout<<"Enter Number  and item to Add After:";
            cin>>numb>>item;
            l1.addAfter(numb,item);
            break;
            case 4:
            cout<<"Enter Number  and item to Add Befor:";
            cin>>numb>>item;
            l1.addBefore(numb,item);
            break;
            case 5:
            cout<<"Enter Number to delete:";
            cin>>numb;
            l1.deleteNode(numb);
            break;
            case 6:
            l1.traverse();
            break;
            case 7:
            cout<<"count is "<<l1.count()<<endl;
            break;
            case 8:
            break;
            default:
            cout<<"Invalid Choice..."<<endl;
        }
        getch();
    }while(ch!=8);
  
    
    return 0;
}