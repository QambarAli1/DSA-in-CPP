// Queue using array
#include <iostream>
#include <string>
using namespace std;

int front = -1;
int rear = -1;
int arr[5];
void enque(int num)
{
    if (front == -1)
    {
        front++;
        rear++;
        arr[rear] = num;
    }
    else{
        rear++;
        arr[rear] = num;
    }
}
void dequeue()
{
    if(front==rear){
        int x = arr[front];
        arr[front] = 0;
        front=-1;
        rear=-1;
    }
    else{
        int x = arr[front];
        arr[front] = 0;
        front++;
    }
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

    enque(1);
    enque(2);
    enque(3);
    enque(4);
    enque(5);
    display();
    cout<<endl;
    dequeue();
    dequeue();
    display();
    return 0;
}