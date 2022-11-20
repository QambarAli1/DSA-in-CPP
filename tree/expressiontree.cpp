#include <iostream>
#include <cstring>
using namespace std;



int isOperator(char c)
{
    if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%' || c == '^' || c == '(' || c == ')')
    {
        return 1;
    }
    else
    {
        // if char is operand
        return 0;
    }
}

struct ETNode{
    char ch;
    struct ETNode *LC, *RC;
    /* data */
};


void inOrder(ETNode *node){
    if(node->LC != NULL){
        inOrder(node->LC);
    }
    cout<< node->ch << " ";
    if(node->RC != NULL){
        inOrder(node->RC);
    }
}

void postOrder(ETNode *node){
    if(node->LC != NULL){
        postOrder(node->LC);
    }
    if(node->RC != NULL){
        postOrder(node->RC);
    }
    cout<< node->ch << " ";
}

void preOrder(ETNode *node){
    cout<< node->ch << " ";
    if(node->LC != NULL){
        preOrder(node->LC);
    }
    if(node->RC != NULL){
        preOrder(node->RC);
    }
}


int main(){
    struct ETNode *stack[10];
    int top = -1;
    struct ETNode *root = NULL;
    char postfix[] = "AB+CD-*";
    // cout<< postfix[0] << endl;
    for(int i=0; i<strlen(postfix) ; i++){
        struct ETNode *temp = new ETNode;
        temp->ch = postfix[i];
        temp->LC = NULL;
        temp->RC = NULL;
        if(isOperator(postfix[i])==0){
            stack[++top] = temp;
        }
        else{
            temp->RC = stack[top--];
            temp->LC = stack[top--];
            stack[++top] = temp;
        }
    }
    root = stack[top--];

    cout<< "stack "<< stack[0]->ch <<endl;
    cout<< "stack "<< stack[1]->ch <<endl;
    // cout<< "stack "<< stack[0]->LC <<endl;
    // cout<< "stack "<< stack[0]->RC <<endl;
    cout<< "root "<< root->ch <<endl;
    inOrder(root);
    cout << endl;
    postOrder(root);
    cout << endl;
    preOrder(root);
}