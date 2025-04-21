#include<iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;
bool isoperator(char ch){
    return (ch=='+' ||ch=='-'||ch=='*'||ch=='/'||ch=='^');
}
int precedence(char op){
    switch(op){
        case '^':return(3);
        case '*':
        case '/':return(2);
        case '-':
        case '+':return(1);
        default:return (0);
        }
}

void intopost(string in,string &post){
    stack<char> s1;
    char ch;
    for(int i=0;i<in.size();i++){
        if(in[i]=='('){
           s1.push(in[i]);
        }
        else if(in[i]==')'){
            while(!s1.empty()&&(ch=s1.top())!='('){
                 s1.pop();
                 post.push_back(ch);
            }
            s1.pop();
        }
        else if(isoperator(in[i])){
            while(!s1.empty()&&(ch=s1.top())!='('&&precedence(ch)>=precedence(in[i])){
                s1.pop();
                post.push_back(ch);
            }
            s1.push(in[i]);
        }
        else{
            post.push_back(in[i]);
        }
    }
}
void intopre(string in,string &pre){
    stack<char> s1;
    char ch;
    for(int i=in.size()-1;i>=0;i--){
        if(in[i]==')'){
            s1.push(in[i]);
        }
        else if(in[i]=='('){
            while(!s1.empty()&&(ch=s1.top())!=')'){
                 s1.pop();
                 pre.push_back(ch);
            }
            s1.pop();
        }
        else if(isoperator(in[i])){
            while(!s1.empty()&&(ch=s1.top())!=')'&&precedence(ch)>precedence(in[i])){
                s1.pop();
                pre.push_back(ch);
            }
            s1.push(in[i]);
        }
        else{
            pre.push_back(in[i]);
        }
        
    }
    reverse(pre.begin(),pre.end());
}
int main()
{string in,pre,post;
    cout<<"Enter Infix Expression";
    cin>>in;
    intopost(in,post);
    cout<<post<<endl;
    intopre(in,pre);
    cout<<pre<<endl;
    
    return 0;
}