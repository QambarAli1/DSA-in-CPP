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
    char infix[10];
    strcpy(infix, "(a*b)+c");
    char postfix[10];
    strcpy(postfix, "");
    // cout<< infix << endl;
    char stack[10];
    int top = -1;
    int j = 0;
    // cout<< strlen(infix);
    for (int i = 0; i < strlen(infix); i++)
    {
        
        if (infix[i] == '(')
        {
            // cout<< top <<endl; // -1
            stack[++top] = infix[i];
            // cout<< top <<endl; // 0
        }
        if (infix[i] == ')')
        {

            while (stack[top] != '(')
            {
                // cout<< "elif" << stack[top] <<endl;
                postfix[j++] = stack[top--];
            }
            top++;
        }
        if (priority(infix[i]) == 0)
        {
            postfix[j++] = infix[i];
        }
        else{
            if (stack[top] == '(' || top == -1)
            {
                stack[++top] = infix[i];
                continue;
            }
            while(top !=-1 && priority(infix[i] < priority(stack[top]))){
                postfix[j++] = stack[top--];
            }
        }
        
    }

    cout << "postfix: " << postfix << endl;

    return 0;
}