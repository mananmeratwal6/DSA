#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
class Node
{
public:
    int info;
    Node *left, *right;
    Node()
    {
        info = 0;
        left = right = NULL;
    }
    Node(int info)
    {
        this->info = info;
        left = right = NULL;
    }
};
class BST
{
    Node *root;

public:
    BST()
    {
        root = NULL;
    }
    void insert(int item)
    {
        Node *ptr = root, *par = NULL;
        while (ptr != NULL)
        {
            if (ptr->info == item)
            {
                cout << "Duplicate item can't insert...";
                return;
            }
            else if (item > ptr->info)
            {
                par = ptr;
                ptr = ptr->right;
            }
            else
            {
                par = ptr;
                ptr = ptr->left;
            }
        }
        Node *t = new Node(item);
        if (root == NULL)
            root = t;
        else if (item > par->info)
            par->right = t;
        else
            par->left = t;
    }
    void traverse()
    {
        int ch;
        cout << "1. PreOrder\n2. In order\n3. Post order\nEnter your choice:";
        cin >> ch;
        if (ch == 1)
            preorder(root);
        else if (ch == 2)
            inorder(root);
        else
            postorder(root);
        cout << endl;
    }
    void preorder(Node *root)
    {
        stack<Node *> s1;
        s1.push(root);
        while(!s1.empty()){
            Node *ptr=s1.top();s1.pop();
            cout<<ptr->info<<"\t";
            if(ptr->right){
                s1.push(ptr->right);
            }
            if(ptr->left){
                s1.push(ptr->left);
            }
        }
    }
    void inorder(Node *root)
    {
        stack<Node *> s1;
        Node *ptr = root;
        while (ptr != NULL || !s1.empty())
        {
            // go to leftmost
            while (ptr != NULL)
            {
                s1.push(ptr);
                ptr = ptr->left;
            }
            ptr = s1.top();
            s1.pop();
            cout << ptr->info << "\t";
            ptr = ptr->right;
        }
    }
    void postorder(Node *root)
    {
    Node *ptr;
    stack<Node *>s1,s2;
    s1.push(root);
    while(!s1.empty()){
        ptr=s1.top();s1.pop();
        s2.push(ptr);
        if(ptr->left!=NULL){
            s1.push(ptr->left);
        }
        if(ptr->right!=NULL){
            s1.push(ptr->right);
        }
    }
    while (!s2.empty())
    {
        ptr=s2.top();s2.pop();
        cout<<ptr->info;
    }
    
    }
    void levelOrderTraverse(Node *root){
        queue<Node *> q1;
        Node *ptr;
        q1.push(root);
        while (!q1.empty())
        {
        ptr=q1.front();q1.pop();
        cout<<ptr->info<<"\t";
        if(ptr->left){
            q1.push(ptr->left);
        }
        if(ptr->right){
            q1.push(ptr->right);
        }
        }
    }
    void mirror(Node *root){
        if(root==NULL){
            return;
        }
        mirror(root->left);
        mirror(root->right);
        if(root->left==NULL&&root->right==NULL)
        return;
        else
        swap(root->left,root->right);
    }
    int maxRecursive(Node *root)
    {
        if(root==NULL){
            return 0;
        }
        else if(root->right==NULL){
            return root->info;
        }
        else{
            return maxRecursive(root->right);
        }
    }
    int max(Node *root){
        Node *ptr=root;
        if(root==NULL){
            return 0;
        }
        while(ptr->right!=NULL){
            ptr=ptr->right;
        }
        return ptr->info;
    }
    int min(Node *root){
        Node *ptr=root;
        if(root==NULL){
            return 0;
        }
        while(ptr->left!=NULL){
            ptr=ptr->left;
        }
        return ptr->info;
    }
    int count()
    {
        return count(root);
    }
    int count(Node *root)
    {
        if (root == NULL)
            return 0;
        int cntl = count(root->left);
        int cntr = count(root->right);
        return cntl + cntr + 1;
    }
    int depth()
{
    return depth(root);
}

int depth(Node *root)
{
    if (root == NULL)
        return 0;

    int leftDepth = depth(root->left);
    int rightDepth = depth(root->right);

    return std::max(leftDepth, rightDepth) + 1;
}

};
int main()
{
    BST b1;
    b1.insert(10);
    b1.insert(8);
    b1.insert(12);
    b1.insert(7);
    b1.insert(9);
    b1.insert(11);
    b1.insert(13);
    b1.traverse();
    cout << "Count is " << b1.count() << endl;
    cout << "Depth is " << b1.depth() << endl;
    return 0;
}