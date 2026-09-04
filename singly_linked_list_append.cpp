#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = nullptr;

void append(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;

    if (!head) {
        head = newNode;
        return;
    }

    Node* cur = head;
    while (cur->next) cur = cur->next;
    cur->next = newNode;
}

void display() {
    Node* cur = head;
    while (cur) {
        cout << cur->data << " ";
        cur = cur->next;
    }
    cout << endl;
}

int main() {
    int n, val;
    cout << "How many nodes? ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter value: ";
        cin >> val;
        append(val);
    }

    display();
    return 0;
}