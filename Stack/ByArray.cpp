#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
class Stack{
    int maxstk;
    int top;
    int *data;
    public:
    Stack(){
     maxstk=5;
        top=-1;
        data=new int[maxstk];
    }
    Stack(int maxstk){
        this->maxstk=maxstk;
        top=-1;
        data=new int[maxstk];
    }
    void push(int item){
        if(top==maxstk-1){
            cout<<"Overflow";
            return;
        }
        else{
           data[++top]=item;
        }
    }
    int pop(){
        if(top==-1){
            cout<<"Underflow";
            return -1;
        }
        else 
        return data[top--];
    }
        int peep(){
            if(top==-1){
                cout<<"Empty";
                return -1;
            }
            else{
             return data[top];
            }
        
    }
    void display(){
        if(top==-1){
            cout<<"Empty";
        }
        else{
            for(int i=top;i>=0;i--){
                cout<<data[i];
            }
        }
    }
    bool isEmpty(){
        return top==-1;
    }
};
int main()
{Stack s1;
    int ch,item;
    do{
        system("cls");
        cout<<"\n1. push\n2. pop\n3. peep\n4 dispaly\n5. Exit\nEnter your choice:";
        cin>>ch;
        switch(ch){
            case 1:
            cout<<"enter element to push:";
            cin>>item;
            s1.push(item);
            break;
            case 2:
            s1.pop();
            if(!s1.isEmpty())
             cout<<s1.pop();
            break;
            case 3:
             if(!s1.isEmpty())
             cout<<s1.peep();
            s1.peep();
            break;
            case 4:
            s1.display();
            break;
            case 5:
            break;
            default:
             cout<<"invalid Choice..."<<endl;
        }
        getch();
    }while(ch!=5);
    
    return 0;
}