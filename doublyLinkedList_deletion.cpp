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
void DeleteStart(Node *&head)
{
    Node *del = head;
    head = head->next;
    head->prev = nullptr;
    delete del;
}
void DeleteEnd(Node *&tail)
{
    Node *del = tail;
    tail = tail->prev;
    tail->next = nullptr;
    delete del;
}
void DeleteAtPos(Node *&head, int pos)
{
    Node *temp = head;
    if (pos == 1)
    {
        DeleteStart(head);
        return;
    }

    for (int i = 0; i < pos - 1; i++)
    {
        temp = temp->next;
    }

    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;
    delete temp;
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
    DeleteStart(head);
    DeleteEnd(temp);
    int pos;
    cout << "enter positon" << endl;
    cin >> pos;
    DeleteAtPos(head, pos);
    Print(head);

    return 0;
}