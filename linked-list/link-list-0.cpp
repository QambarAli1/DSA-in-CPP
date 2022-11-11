#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};
node *head = NULL;
void insert(int num)
{
    node *temp = new node;
    temp->data = num;
    temp->next = head;
    head = temp;
}
void print()
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    int size;
    cout << "Enter size of link list:" << endl;
    cin >> size;
    int num;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter data "<< i+1 << ":" << endl;
        cin >> num;
        insert(num);
    }
    print();
    return 0;
}