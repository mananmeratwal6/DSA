#include<iostream>
using namespace std;
class Node{
    public:
    int info;
    Node *left,*right;
    Node(){
        info=0;
        left=right=NULL;
    }
    Node(int info){
        this->info=info;
        left=right=NULL;
    }
};
class BST{
    Node *root;
    public:
    BST(){
        root=NULL;
    }
    void insert(int item){
        Node *ptr=root,*par=NULL;
        while(ptr!=NULL){
            if(ptr->info==item){
            cout<<"Item Duplicate";
            return;
            }
            else if(item>ptr->info){
                 par=ptr;
                 ptr=ptr->right;
            }
            else{
                par=ptr;
                ptr=ptr->left;
            }
        }
        Node *newNode=new Node(item);
        if(root==NULL){
            root=newNode;
        }
        else if(item>par->info){
             par->right=newNode;
        }
        else{
            par->left=newNode;
        }

    }


    void preOrder(Node *root){
        if(root==NULL)
         return;
        cout<<root->info<<"\t";
        preOrder(root->left);
        preOrder(root->right);
    }
    void inOrder(Node *root){
        if(root==NULL)
         return;
        inOrder(root->left);
        cout<<root->info<<"\t";
        inOrder(root->right);
    }
    void postOrder(Node *root){
        if(root==NULL)
         return;
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->info<<"\t";
    }
   
    void traverse(){
        int ch;
        cout<<"1. pre order\n2. in order\n3. post order\nEnter your choice";
        cin>>ch;
        if(ch==1)
           preOrder(root);
        else if(ch==2)
           inOrder(root);
        else
           postOrder(root);
    }
};
int main()
{
    BST g1;
    g1.insert(10);
    g1.insert(8);
    g1.insert(12);
    g1.insert(7);
    g1.insert(9);
    g1.insert(11);
    g1.insert(13);
    g1.traverse();    
    return 0;
}