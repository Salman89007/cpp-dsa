#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};

Node *insert(Node *root, int val)
{
    if (root == nullptr)
    {
        Node *newNode = new Node();
        newNode->data = val;
        newNode->left = nullptr;
        newNode->right = nullptr;
        return newNode; // here indirectly root = newNode only for first try, rest are children
    }

    if (val < root->data)
        root->left = insert(root->left, val); // contains now 0x30
    else
        root->right = insert(root->right, val);

    return root;
}

void PreOrder(Node *root)
{
    if (root == nullptr)
    {
        return;
    }
    cout << root->data << " ";
    PreOrder(root->left);
    PreOrder(root->right);
}

void PostOrder(Node *root)
{
    if (root == nullptr)
    {
        return;
    }
    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->data << " ";
}

void InOrder(Node *root)
{
    if (root == nullptr)
        return;

    InOrder(root->left);
    cout << root->data << " ";
    InOrder(root->right);
}

int main()
{
    Node *root = nullptr;

    root = insert(root, 50); // root here is null
    root = insert(root, 30); // here it is 0x50 for example
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);

    cout << "Inorder:  ";
    InOrder(root);
    cout << endl;
    cout << "Postoder: ";
    PostOrder(root);
    cout << endl;
    cout << "Preorder: ";
    PreOrder(root);
    cout << endl;

    return 0;
}