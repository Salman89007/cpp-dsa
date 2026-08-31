#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* findMin(Node* node) {//50
    while (node->left != nullptr)
        node = node->left;
    return node;
}

Node *insert(Node *root, int val)
{
    if (root == nullptr)
    {
        Node *newNode = new Node();
        newNode->data = val;
        newNode->left = nullptr;
        newNode->right = nullptr;
        return newNode;
    }

    if (val < root->data)
        root->left = insert(root->left, val);
    else
        root->right = insert(root->right, val);

    return root;
}

Node* deleteNode(Node* root, int key) {// 50,50
    if (root == nullptr) return root; // not found

    if (key < root->data) {
        root->left = deleteNode(root->left, key);
    }
    else if (key > root->data) {
        root->right = deleteNode(root->right, key);
    }
    else {// this else means key == root->data
        // found the node to delete

        // Case 1 & 2: 0 or 1 child
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        // Case 3: two children
        Node* successor = findMin(root->right);//50 recieved
        root->data = successor->data;              // copy value
        root->right = deleteNode(root->right, successor->data); // delete duplicate
    }
    return root;
}

void print(Node *root)
{
    if (root == nullptr)
        return;

    print(root->left);
    cout << root->data << " ";
    print(root->right);
}

int main()
{
    Node *root = nullptr;

    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);
    root = deleteNode(root, 30);

    cout << "Inorder: ";
    print(root);
    cout << endl;

    return 0;
}