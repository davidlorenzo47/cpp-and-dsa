#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    struct node* left;
    struct node* right;
};

struct node* newNode(int idata) {
    struct node* node = new struct node();
    node->data = idata;
    node->left = NULL;
    node->right = NULL;
    return node;
};

int main() {

    struct node *root = newNode(10);
    root->left = newNode(20);
    root->right = newNode(30);

    cout<<" "<<root->data<<endl;
    cout<<root->right->data<<" "<<root->left->data;

    return 0;
}