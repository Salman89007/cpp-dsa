#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
void START(Node* &Pos){
    Node* temp = Pos;
    
    Pos = Pos->next;
    delete (temp);
}
void inBetween(Node* &Pos,int p){//for body1 and body2 ,for head and tail they are separate

    Node* temp = Pos;
    for (int i = 0; i < p-1 ; i++)
    {
        temp = temp->next;
    }
    Node* toDelete = temp->next;
    temp->next = temp->next->next;
    delete(toDelete);
    

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

    body2->data = 3;
    body2->next = tail;

    tail->data = 4;
    tail->next = nullptr;

    // START(head); //for p==0 we use this shit 
    inBetween(head,3);

    Node *cur = head;
    while (cur != nullptr)
    {
        cout << cur->data << " ";
        cur = cur->next;
    }

    return 0;
}