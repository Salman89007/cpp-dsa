#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};

int Search(Node* &Pos,int data){//for body1 and body2 ,for head and tail they are separate

    Node* temp = Pos;
    while(temp!=nullptr)
    {
        if (temp->data == data)
        {
            return true;
        }
        
        temp = temp->next;
    }
    return false;
}
int main()
{

    Node *head = new Node();
    Node *body1 = new Node();
    Node *body2 = new Node();
    Node *tail = new Node();

    head->data = 1;
    head->next = body1;

    body1->data = 2;
    body1->next = body2;

    body2->data = 100;
    body2->next = tail;

    tail->data = 4;
    tail->next = nullptr;

    // START(head); //for p==0 we use this shit 
    int istrue = Search(head,3);
    if (istrue)
    {
        cout<<"FOUND";
    }
    else{
        cout<<"not found";
    }

    // Node *cur = head;
    // while (cur != nullptr)
    // {
    //     cout << cur->data << " ";
    //     cur = cur->next;
    // }

    return 0;
}