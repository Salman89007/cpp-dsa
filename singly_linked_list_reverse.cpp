#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *reverse(Node *&head)
{
    Node *prev = nullptr;
    Node *curr = head;
    while (curr != nullptr)
    {
        Node *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
void Print(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    Node *A = new Node();
    Node *B = new Node();
    Node *C = new Node();

    Node *prev;
    Node *curr;
    Node *next;

    A->data = 1;
    A->next = B;

    B->data = 2;
    B->next = C;

    C->data = 3;
    C->next = nullptr;
    Node *head = reverse(A);
    Print(head);

    return 0;
}