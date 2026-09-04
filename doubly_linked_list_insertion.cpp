#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node *prev;
};
void Create(Node *&head, Node *&temp, int i)
{
    Node *NewNode = new Node();
    int data;
    cout << "enter Node" << " " << i + 1 << " " << "value " << endl;
    cin >> data;
    NewNode->data = data;
    NewNode->next = nullptr;
    NewNode->prev = nullptr;
    if (head == nullptr)
    {
        head = temp = NewNode;
    }
    else
    {
        temp->next = NewNode;
        NewNode->prev = temp;
        temp = NewNode;
    }
}
void InsertStart(Node *&head)
{
    Node *NewHead = new Node();
    NewHead->next = nullptr;
    NewHead->prev = nullptr;
    int data;
    cout << "enter data" << endl;
    cin >> data;
    NewHead->data = data;
    head->prev = NewHead;
    NewHead->next = head;
    head = NewHead;
}
void InsertEnd(Node *&tail)
{
    Node *NewTail = new Node();
    NewTail->next = nullptr;
    NewTail->prev = nullptr;
    int data;
    cout << "enter data" << endl;
    cin >> data;
    NewTail->data = data;
    tail->next = NewTail;
    NewTail->prev = tail;
    tail = NewTail;
}
void InsertAtPos(Node *&head, int pos)
{
    Node *temp = head;    
    if (pos == 1)
    {
        InsertStart(head);
        return;
    }

    Node *NewNode = new Node();
    int data;
    cout << "enter data" << endl;
    cin >> data;
    NewNode->data = data;
    
    for (int i = 0; i < pos - 2; i++)
    {
        temp = temp->next;
    }
    NewNode->prev = temp;
    NewNode->next = temp->next;
    temp->next->prev = NewNode;
    temp->next = NewNode;
}
void Print(Node *Head)
{
    Node *tail = Head;
    while (Head != nullptr)
    {
        cout << Head->data << " ";
        tail = Head;
        Head = Head->next;
    }
    cout << endl;
    while (tail != nullptr)
    {
        cout << tail->data << " ";
        tail = tail->prev;
    }
}
int main()
{
    Node *head = nullptr;
    Node *temp = nullptr;

    for (int i = 0; i < 3; i++)
    {
        Create(head, temp, i);
    }
    InsertStart(head);
    InsertEnd(temp);
    int pos;
    cout << "enter positon" << endl;
    cin >> pos;
    InsertAtPos(head, pos);
    Print(head);

    return 0;
}