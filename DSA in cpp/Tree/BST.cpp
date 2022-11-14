#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* GetNewNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

Node* insert(Node* root, int data) {

    if (root == NULL)
    {
        root = GetNewNode(data);
    }
    else if (data <= root->data)
    {
        root->left = insert(root->left, data);
    }
    else {
        root->right = insert(root->right, data);
    }
    return root;
}

bool Search(Node* root, int data) {
    if (root == NULL)
    {
        return false;
    }
    else if(root->data == data)
    {
        return true;
    }
    else if (data <= root->data)
    {
        return Search(root->left,data);
    }
    else
    {
        return Search(root->right, data);
    }
}

int main() {

    Node* root = NULL;
    root = insert(root, 15);
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 25);
    root = insert(root, 8);
    root = insert(root, 12);


    cout<<Search(root, 25);

    // cout<<root->data<<endl<<root->left->data<<"            "<<root->right->data<<endl;
    // cout<<root->left->left->data<<"    "<<root->left->right->data;
    // cout<<"    "<<root->right->right->data;

    return 0;
}