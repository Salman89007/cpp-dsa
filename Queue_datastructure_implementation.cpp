#include <iostream>
using namespace std;
#define MAX 5
class Queue
{
    int front;
    int rear;
    int Arr[MAX];

public:
    Queue(int front, int rear)
    {
        this->front = front;
        this->rear = rear;
    }
    void Enqueue(int value)
    {
        if (rear == MAX - 1)
        {
            cout << "QUEUE full ,kindly fuck off" << endl;
            return;
        }
        rear++;
        Arr[rear] = value;
        if (front == -1)
            front = 0;
    }
    void Dequeue()
    {
        if (front == -1 || front > rear)
        {
            cout << "no element to remove" << endl;
            return;
        }
        front++;
    }
    void Print()
    {
        for (int i = front; i <= rear; i++)
        {
            cout << Arr[i] << " ";
        }
    }
};
int main()
{
    int val;
    Queue Q(-1, -1);
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter value for index " << i << endl;
        cin >> val;
        Q.Enqueue(val);
    }
    Q.Dequeue();
    Q.Print();
    return 0;
}