#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node *prev;
};
Node *Create(Node* &head, Node* &temp,int i)
{
    Node *NewNode = new Node();
    int data;
    cout<<"enter Node"<<" "<<i+1<<" "<<"value "<<endl;
    cin>>data;
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
        NewNode->prev  = temp;
        temp = NewNode;
    }
    return head;
}
void Print(Node *Head)
{
    Node* tail = Head;
    while (Head != nullptr)
    {
        cout<<Head->data<<" ";
        tail = Head;
        Head = Head->next;
    }
    cout<<endl;
    while (tail!=nullptr)
    {
        cout<<tail->data<<" ";
        tail = tail->prev;
    }
    
}
int main()
{
    Node *head = nullptr;
    Node *temp = nullptr;
    Node *H;

    for (int i = 0; i < 3; i++)
    {
        H = Create(head, temp, i);
    }
    Print(H);

    return 0;
}