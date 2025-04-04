#include<iostream>
using namespace std;
struct Box{
    public:
    int feet;
    int inches;
    
   
};
void swap(Box * obj1,Box * obj2){
int  t;
t=obj1->feet; 
obj1->feet=obj2->feet;
obj2->feet=t;

}
int main()
{Box b1,b2,b3;
    cout<<"Enter feet of b1";
    cin>>b1.feet;
    cout<<"Enter feet of b1";
    cin>>b2.feet;
    swap(&b1,&b2);
    cout<<b1.feet<<b2.feet;

    
    return 0;
}