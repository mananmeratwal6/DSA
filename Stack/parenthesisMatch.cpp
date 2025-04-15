#include<iostream>
#include<stack>
#include<string>
using namespace std;
bool isValid(string eq){
  stack<char> s1;
  for(char e:eq){
    if(e=='('||e=='['||e=='{'){
        s1.push(e);
    }
    else if(e==')'||e==']'||e=='}'){
        if(s1.empty()) 
        return false;
        char top=s1.top();
        if((e==')'&&top!='(')||(e=='}'&&top!='{')||(e==']'&&top!='['))
        return false;
        else {
            s1.pop();
        }
    }
    
  }
  return s1.empty();

}
int main()
{
    string eq;
    cout<<"enter a equation conataining parenthesis";
    getline(cin,eq);
    bool ans=isValid(eq);
    if(ans)
    cout<<"equation is valid";
    else
    cout<<"equation is not valid";
    return 0;
}