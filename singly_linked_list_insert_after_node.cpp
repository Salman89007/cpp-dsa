#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
void append(Node *&pos, int data)
{
    Node *NewNODE = new Node();
    NewNODE->data = data;
    NewNODE->next = pos->next;
    pos->next = NewNODE;
}
int main()
{

    Node *head = new Node();
    Node *body = new Node();
    Node *tail = new Node();

    head->data = 1;
    head->next = body;

    body->data = 2;
    body->next = tail;

    tail->data = 3;
    tail->next = nullptr;

    append(head, 100);

    Node *cur = head;
    while (cur != nullptr)
    {
        cout << cur->data << " ";
        cur = cur->next;
    }

    return 0;
}