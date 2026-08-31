#include <iostream>
#include <vector>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *AutoFill(Node *&head,Node* &temp)
{
    Node *NewNode = new Node();
    int data;
    cout << "enter data" << endl;
    cin >> data;
    NewNode->data = data;
    NewNode->next = nullptr;
    if (head == nullptr)
    {
        head = temp = NewNode;
        return head;
    }
    else
    {
        temp->next = NewNode;
        temp = NewNode;
    }
    return head;
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
    Node* head = nullptr;
    Node* temp = nullptr;

    for (int i = 0; i < 3; i++)
    {
        AutoFill(head,temp);
    }
    print(head);
    return 0;
}