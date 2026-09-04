#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
private:
    Node* head;
public:
    LinkedList();
    void append(int data);
    void display();
};
LinkedList::LinkedList() {
    head = nullptr;
}
void LinkedList::append(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    if (!head) {
        head = newNode;
    } else {
        Node* current = head;
        while (current->next) {
            current = current->next;
        }
        current->next = newNode;
    }
}
void LinkedList::display() {
    Node* current = head;
    while (current) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}
int main() {
    LinkedList list;
    list.append(10);
    list.append(20);
    list.append(30);
    cout << "Linked List: ";
    list.display();
    return 0;
}