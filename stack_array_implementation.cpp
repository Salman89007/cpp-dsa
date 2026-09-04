// using classes
#include <iostream>
using namespace std;
#define MAX 5
class Stack
{
    int top;
    int Arr[MAX];

public:
    Stack(int top_val)
    {
        top = top_val;
    }
    void Push(int push_val)
    {
        if (top == MAX - 1)
        {
            cout << "STACK FULL, value " << push_val << " not inserted" << endl;
            return;
        }
        top++;
        Arr[top] = push_val;
    }

    int Pop()
    {
        if (top == -1)
            return -1;
        int value = Arr[top];
        top--;
        return value;
    }
    bool isEmpty()
    {
        return top == -1;
    }
    void Print()
    {
        for (int i = top; i >= 0; i--)
        {
            cout << Arr[i] << " ";
        }
    }
};
int main()
{
    Stack s(-1);
    int val;
    for (int i = 0; i < MAX; i++)
    {
        cout << "enter value" << endl;
        cin >> val;
        s.Push(val);
    }
    s.Print();
    cout << endl;
    for (int i = MAX; i > 0; i--)
    {
        cout << s.Pop() << " got removed" << endl;
    }

    return 0;
}