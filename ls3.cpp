#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
void prepend(Node* &Head , int data){
    Node *Newhead = new Node();
    Newhead->data = data;
    Newhead->next = Head;
    Head = Newhead;
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

    prepend(Nhead,6);

    Node *cur = Nhead;
    while (cur != nullptr)
    {
        cout << cur->data << " ";
        cur = cur->next;
    }

    return 0;
}