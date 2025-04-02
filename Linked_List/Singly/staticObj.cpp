#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int info;
    Node *next;
};
int main()
{
    Node n1,n2;
    n1.info=1;
    n1.next=&n2;
    n2.info=3;
    n2.next=NULL;
    cout<<n1.info;
    cout<<n1.next->info;


    return 0;
}