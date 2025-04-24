#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class Node{
    public:
    int info;
    Node *next;

};
int main()
{Node n1,n2;
    n1.info=10;
    n2.info=20;
    n1.next=&n2;
    n2.next=NULL;
    cout<<n1.info<<n1.next->info;
    
    return 0;
}