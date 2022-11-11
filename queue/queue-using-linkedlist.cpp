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
void enqueue(node *n)
{
    if (head == NULL)
    {
        head = n;
    }
    else
    {
        node *temp = head;
        while(temp!=NULL){
            temp=temp->next;
        }
        temp = n;
        // n->next = temp;
    }
}
void dequeue(){
    node *temp = head;
    while(temp != NULL){
        temp = temp->next;
    }
    temp=NULL;
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
        enqueue(num1);
    }
    // print();
    cout<<endl;
    dequeue();
    dequeue();
    print();
    return 0;
}