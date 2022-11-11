// Stack using linked list
#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node()
    {
        data = 0;
        next = NULL;
    }
};
node *head = NULL;
void push(node *n)
{
    if (head == NULL)
    {
        head = n;
    }
    else
    {
        node *temp = head;
        head = n;
        n->next = temp;
    }
}
void pop(){
    node *temp = head;
    head=head->next;
}

void print()
{
    node *temp = head;
    while (temp!= NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    int size;
    cout<<"Enter size of list:"<<endl;
    cin >> size;
    for (int i = 0; i < size ; i++)
    {
        node *num1 = new node();
        int data1;
        cout << "Enter data " << i+1 << ":" << endl;
        cin >> data1;
        num1->data = data1;
        push(num1);
    }
    print();
    cout<<endl;
    pop();
    print();
    return 0;
}