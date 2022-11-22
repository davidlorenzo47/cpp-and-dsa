#include <iostream>
using namespace std;

struct node {
    int data;
    node* right;
    node* left;
};

node* getnewnode(int data) {
    node* newnode = new node();
    newnode->data = data;
    newnode->left = newnode->right = NULL;
    return newnode;
}

node* insert(node* root, int data) {
    if (root == NULL) root = getnewnode(data);
    else if (data <= root->data) root->left = insert(root->left, data);
    else if (data > root->data) root->right = insert(root->right, data);

    return root;
}

bool search(node* root, int data) {
    if (root == NULL) return false;
    else if (root->data == data) {return true;}
    else if (data <= root->data) {return search(root->left, data);}
    else {return search(root->right, data);}
}

node* findmin(node* root) {
    while (root->left != NULL)    root = root->left;
    return root;
}

struct node *deletion(struct node* root, int data) {
    if(root == NULL) return root;
    else if(data < root->data) root->left = deletion(root->left, data);
    else if(data > root->data) root->right = deletion(root->right, data);

    else if (root->left == NULL && root->right == NULL) 
    {
        delete root;
        root = NULL;
    }

    else if (root->left == NULL)
    {
        struct node* temp = root;
        root = root->right;
        delete temp;
    }
    else if (root->right == NULL)
    {
        struct node* temp = root;
        root = root->left;
        delete root;
    }
    
    else
    {
        struct node* temp = findmin(root->right);
        root->data = temp->data;
        root->right = deletion(root->right, temp->data);
    }
    return root;
};

int main() {

    node* root = NULL;

    root = insert(root, 15);
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 25);
    root = insert(root, 8);
    root = insert(root, 12);
    root = insert(root, 22);
    root = insert(root, 26);
    root = insert(root, 19);
    root = insert(root, 23);

    deletion(root, 20);
    cout<<root->right->right->left->data;

    return 0;
}