#include <iostream>
#include <vector>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

void AutoFill(Node *&head , Node *&tail) // sort of doing enqueue func work
{
    Node *NewNode = new Node();
    int data;
    cout << "enter data" << endl;
    cin >> data;
    NewNode->data = data;
    NewNode->next = nullptr;
    if (head == nullptr)
    {
        head = tail = NewNode;
    }
    else
    {
        tail->next = NewNode;
        tail = NewNode;
    }
}

void dequeue(Node* &head, Node* &tail)
{
    if (head == nullptr)
    {
        cout << "queue empty" << endl;
        return;
    }
    Node *temp = head;
    head = head->next;
    delete temp;
    if (head == nullptr)
    {
        tail = nullptr;
    }
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
    Node *tail = nullptr;

    for (int i = 0; i < 3; i++)
    {
        AutoFill(head,tail);
    }
    for (int i = 0; i < 3; i++)
    {
        dequeue(head,tail);
    }
    if (head == nullptr)
    {
        cout << "Top element is " << "NONE, queue empty " << endl;
    }
    else{
        cout << "Top element is " << peek(head) << endl;
    }
    print(head);
    return 0;
}