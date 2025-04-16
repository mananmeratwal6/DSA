#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
using namespace std;
bool isoperator(char ch)
{
    return (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^');
}
int preced(char op)
{
    switch (op)
    {
    case '^':
        return (3);
    case '*':
    case '/':
        return (2);
    case '+':
    case '-':
        return (1);
    default:
        return (0);
    }
}
void intopost(string in, string &post)
{
    stack<char> s1;
    char ch;
    for (int i = 0; i < in.size(); i++)
    {
        if (in[i] == '(')
        {
            s1.push(in[i]);
        }
        else if (in[i] == ')')
        {
            while (!s1.empty() && (ch = s1.top()) != '(')
            {
                s1.pop();
                post.push_back(ch);
            }
            s1.pop();
        }
        else if (isoperator(in[i]))
        {
            while (!s1.empty() && (ch = s1.top()) != '(' && preced(ch) >= preced(in[i]))
            {
                s1.pop();
                post.push_back(ch);
            }
            s1.push(in[i]);
        }
        else
        { // operand
            post.push_back(in[i]);
        }
    }
}
void intopre(string in, string &pre)
{
    stack<char> s1;
    char ch;
    for (int i = in.size() - 1; i >= 0; i--)
    {
        if (in[i] == ')')
        {
            s1.push(in[i]);
        }
        else if (in[i] == '(')
        {
            while (!s1.empty() && (ch = s1.top()) != ')')
            {
                s1.pop();
                pre.push_back(ch);
            }
            s1.pop();
        }
        else if (isoperator(in[i]))
        {
            while (!s1.empty() && (ch = s1.top()) != ')' && preced(ch) > preced(in[i]))
            {
                s1.pop();
                pre.push_back(ch);
            }
            s1.push(in[i]);
        }
        else
        { // operand
            pre.push_back(in[i]);
        }
    }
    reverse(pre.begin(), pre.end());
}
int main()
{
    string in, pre, post;
    cout << "Enter expression in infix notation:";
    cin >> in;
    intopost(in, post);
    cout << "Expression in postfix is " << post << endl;
    intopre(in, pre);
    cout << "Expression in prefix is " << pre << endl;
    return (0);
}