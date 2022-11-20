// Infix to Postfix
#include <iostream>
#include <cstring>
using namespace std;

int priority(char c)
{
    if (c == '+' || c == '-')
    {
        return 1;
    }
    else if (c == '*' || c == '/' || c == '%')
    {
        return 2;
    }
    else if (c == '^')
    {
        return 3;
    }
    else if (c == '(' || c == ')')
    {
        return 4;
    }
    else
    {
        // if char is operand
        return 0;
    }
}
int main()
{
    char infix[20];
    strcpy(infix, "(a+b)*(c+d)");
    char postfix[20];
    strcpy(postfix, "");
    // cout<< infix << endl;
    char stack[20];
    int top = -1;
    int j = 0;
    // cout<< strlen(infix);
    for (int i = 0; i < strlen(infix); i++)
    {
        
        if (infix[i] == '(')
        {
            stack[++top] = infix[i];
        }
        else if (infix[i] == ')')
        {

            while (stack[top] != '(')
            {
                postfix[j++] = stack[top];
                top--;
                continue;
            }
            stack[top--];
        }
        else if (priority(infix[i]) == 0)
        {
            postfix[j++] = infix[i];
        }
        else{
            if (stack[top] == '(' || top==-1 )
            {
                stack[++top] = infix[i];
                continue;
            }
            while(top != -1 && priority(infix[i] <= priority(stack[top]))){
                postfix[j++] = stack[top--];
                // top--;
            }
        }
        
    }
    cout << "stack: " << stack << endl;
    // while(top > 0){
    //     postfix[j++] = stack[top--];
    // }
    cout << "postfix: " << postfix << endl;
    return 0;
}