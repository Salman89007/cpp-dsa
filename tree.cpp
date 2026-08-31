// so trees, yay
/*
so we start with a tree, and we want to make it a binary tree, so we need to define a node structure. Each node will have a value, and pointers to its left and right children. We can also include a constructor for easy initialization.

*/
#include <iostream>
using namespace std;

class Node
{
private:
    int data;
    Node *left;
    Node *right;

public:
    Node(int value){
        data = value;
        left = nullptr;
        right = nullptr;
    };

    Node::Node(int value) : data(value), left(nullptr), right(nullptr)
    {
        // Constructor initializes the node with a value and sets left and right children to nullptr

    }
    void insert(Node *&root, int value)
    {
        if (root == nullptr)
        {
            root = new Node(value);
        }
        else if (value < root->data)
        {
            insert(root->left, value);
        }
        else
        {
            insert(root->right, value);
        }
    }
    void inorderTraversal(Node *root)
    {
        if (root != nullptr)
        {
            inorderTraversal(root->left);
            cout << root->data << " ";
            inorderTraversal(root->right);
        }
    }
    void preorderTraversal(Node *root)
    {
        if (root != nullptr)
        {
            cout << root->data << " ";
            preorderTraversal(root->left);
            preorderTraversal(root->right);
        }
    }
    void postorderTraversal(Node *root)
    {
        if (root != nullptr)
        {
            postorderTraversal(root->left);
            postorderTraversal(root->right);
            cout << root->data << " ";
        }
    }
    void deleteTree(Node *root)
    {
        if (root != nullptr)
        {
            deleteTree(root->left);
            deleteTree(root->right);
            delete root;
        }
    }
    void printTree(Node *root, int space = 0, int height = 10)
    {
        if (root == nullptr)
        {
            return;
        }
        space += height;
        printTree(root->right, space);
        cout << endl;
        for (int i = height; i < space; i++)
        {
            cout << " ";
        }
        cout << root->data << "\n";
        printTree(root->left, space);
    }
};
int main()
{
    Node *root = nullptr;
    Node tree(0); // Create a Node object to use the member functions
    tree.insert(root, 5);
    tree.insert(root, 3);
    tree.insert(root, 7);
    tree.insert(root, 2);
    tree.insert(root, 4);
    tree.insert(root, 6);
    tree.insert(root, 8);

    cout << "Inorder Traversal: ";
    tree.inorderTraversal(root);
    cout << endl;

    cout << "Preorder Traversal: ";
    tree.preorderTraversal(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    tree.postorderTraversal(root);
    cout << endl;

    cout << "Tree Structure:\n";
    tree.printTree(root);

    // Clean up memory
    tree.deleteTree(root);

    return 0;
}