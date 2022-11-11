// Stack using array
#include <iostream>
#include <string>
using namespace std;

int top = -1;
int arr[5];
void push(int num)
{
    top++;
    arr[top] = num;
}
void pop()
{
    arr[top] = 0;
    top--;
}
void display()
{
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{

    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    cout<<"before pop:"<<endl;
    display();
    cout<<endl;
    pop();
    pop();
    cout<<"after pop:"<<endl;
    display();
    return 0;
}