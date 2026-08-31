#include <iostream>
#include <vector>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *AutoFill(Node *&head) // sort of doing push func work
{
    Node *NewNode = new Node();
    int data;
    cout << "enter data" << endl;
    cin >> data;
    NewNode->data = data;
    NewNode->next = nullptr;
    if (head == nullptr)
    {
        head = NewNode;
    }
    else
    {
        NewNode->next = head;
        head = NewNode;
    }

    return head;
}

void pop(Node *&head)
{
    if (head == nullptr)
    {
        cout << "stack empty" << endl;
        return;
    }
    Node *temp = head;
    head = head->next;
    delete temp;
}

int peek(Node *head)
{
    // gives top element;
    if (head == nullptr)
    {
        cout << "Stack empty\n";
        return -1;
    }
    return head->data;
}

void print(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "nullptr\n";
}
int main()
{
    Node *head = nullptr;

    for (int i = 0; i < 3; i++)
    {
        AutoFill(head);
    }
    pop(head);
    cout << "Top element is " << peek(head) << endl;
    print(head);
    return 0;
}