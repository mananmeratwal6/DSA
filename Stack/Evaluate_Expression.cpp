#include<iostream>
#include<string>
#include<stack>
#include<math.h>
using namespace std;
bool isoperator(char ch){
    return (ch=='+'||ch=='-'||ch=='*'||ch=='/'||ch=='^');
}
int solve(int op1,int op2,char op){
    switch(op){
        case '^': return pow(op1,op2);
        case '/': return op1/op2;
        case '*': return op1*op2;
        case '-': return op1-op2;
        case '+': return op1+op2;
        default : return 0;
    }
}
int evalpost(string post){
    stack<int> s1;
    int ans;
    for(int i=0;i<post.size();i++){
        if(isoperator(post[i])){
           int a=s1.top();s1.pop();
           int b=s1.top();s1.pop();
           ans=solve(b,a,post[i]);
           s1.push(ans);
        }
        else{
            s1.push(post[i]-'0');
        }
    }
    return ans;
}
int evalpre(string pre){
    stack<int> s1;
    int ans;
    for(int i=pre.size()-1;i>=0;i--){
        if(isoperator(pre[i])){
           int a=s1.top();s1.pop();
           int b=s1.top();s1.pop();
           ans=solve(a,b,pre[i]);
           s1.push(ans);
        }
        else{
            s1.push(pre[i]-'0');
        }
    }
    return ans;
}
int main()
{string post,pre;
    int ans;
    cout<<"Enter Expression in Postfix Notation ";
    cin>>post;
    ans=evalpost(post);
    cout<<"Result is"<<ans<<endl;
    cout<<"Enter Expression in Prefix Notation ";
    cin>>pre;
    ans=evalpre(pre);
    cout<<"Result is "<<ans<<endl;


    
    return 0;
}