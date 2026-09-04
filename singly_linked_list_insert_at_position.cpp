#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
void Position(Node* &Pos,int data,int p){
    Node* NewNODE = new Node();
    NewNODE->data = data;
    if (p==0)
    {
        NewNODE->next = Pos;
        Pos = NewNODE;
    }
    Node* cur = Pos;
    for (int i = 0; i < p - 1; i++)
    {
        cur = cur->next;
    }
    NewNODE->next = cur->next;
    cur->next = NewNODE;
    

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

    Position(head, 100,3);

    Node *cur = head;
    while (cur != nullptr)
    {
        cout << cur->data << " ";
        cur = cur->next;
    }

    return 0;
}