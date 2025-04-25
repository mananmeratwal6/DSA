#include<bits/stdc++.h>
using namespace std;
class MultiQueue{
    int *data;
    int front1,front2,rear1,rear2,maxq;
    public:
    MultiQueue(){
    maxq=5;
    data=new int[maxq];
    front1=rear1=-1;
    front2=rear2=maxq;
    }
    MultiQueue(int maxq){
    this->maxq=maxq;
    data=new int[maxq];
    front1=rear1=-1;
    front2=rear2=maxq;
    }
    void addleft(int item){
        if(rear1+1==rear2){
            cout<<"OVERFLOW";
            return;
        }
        if(front1==-1){
            front1=rear1=0;
        }else{
        rear1++;}
        data[rear1]=item;
    }
    void addright(int item){
        if(rear1+1==rear2){
            cout<<"OVERFLOW";
            return;
        }
        if(front2==maxq){
            front2=rear2=maxq-1;
        }else{
        rear2--;}
        data[rear2]=item;
    }
    int delleft(){
        if(front1==-1){
            cout<<"UNDERFLOW";
            return -1;
        }
        int item=data[front1];
        front1++;
        return item;
    }
    int delright(){
        if(front2==maxq){
            cout<<"UNDERFLOW";
            return -1;
        }
        int item=data[front2];
        front2--;
        return item;
    }
    void displayleft(){
        for(int i=front1;i<=rear1;i++){
            cout<<data[i]<<"\t";
        }
    }
    void displayright(){
        for(int i=front2;i>=rear2;i--){
            cout<<data[i]<<"\t";
        }
    }
};
int main()
{
    MultiQueue m1(8);
    m1.addleft(30);
    m1.addleft(20);
    m1.addleft(10);
    cout<<m1.delleft()<<endl;
    m1.displayleft();
    m1.addright(40);
    m1.addright(50);
    m1.addright(60);
    cout<<m1.delright()<<endl;
    m1.displayright();
    
    return 0;
}