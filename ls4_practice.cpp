#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
void append(Node *&tail, int data)
{
    Node *Newtail = new Node();
    Newtail->data = data;
    Newtail->next = nullptr;
    tail->next = Newtail;
    tail = Newtail;
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

    append(tail, 100);

    Node *cur = head;
    while (cur != nullptr)
    {
        cout << cur->data << " ";
        cur = cur->next;
    }

    return 0;
}