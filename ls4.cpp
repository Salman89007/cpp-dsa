#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
void append(Node* &Ntail, int data) {
    Node* NewTail = new Node();
    NewTail->data = data;
    NewTail->next = nullptr;   // new node is the last, so NULL
    Ntail->next = NewTail;     // old tail points to new node
    Ntail = NewTail;           // update tail to new node
}
int main()
{
    
    Node *Nhead = new Node();
    Node *N2nd = new Node();
    Node *Ntail = new Node();

    

    Nhead->data = 7;
    Nhead->next = N2nd;

    N2nd->data = 99;
    N2nd->next = Ntail;

    Ntail->data = 100;
    Ntail->next = nullptr;

    append(Ntail,6);

    Node *cur = Nhead;
    while (cur != nullptr)
    {
        cout << cur->data << " ";
        cur = cur->next;
    }

    return 0;
}