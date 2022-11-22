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

//Function to find minimum in a tree. 
Node* FindMin(Node* root)
{
	while(root->left != NULL) root = root->left;
	return root;
}

struct Node* deletion(struct Node *root, int data) {
    if (root == NULL) return root;
    else if (data < root->data) root->left = deletion(root->left, data);
    else if(data > root->data) root->right = deletion(root->right, data);
    else {
        // Case 1: No child i.e. leaf node
        if (root->left == NULL && root->right == NULL)
        {
            delete root; //delete is used to deallocate memory.
            root = NULL;
        }
        // Case 2: Node having only one child
        else if (root->left == NULL)
        {
            struct Node *temp = root;
            root = root->right;
            delete temp;
        }
        else if(root->right == NULL) {
			struct Node *temp = root;
			root = root->left;
			delete temp;
		}
        // Case 3: Node with 2 children
        else
        {
            struct Node *temp = FindMin(root->right);
            root->data = temp->data;    //the value of the node to be deleted changes here.
            root->right = deletion(root->right, temp->data);    //The node which was changed, its 2nd value is deleted.
        }
    }
    return root;
};

int main() {

    Node* root = NULL;
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


    // cout<<Search(root, 25);

    // cout<<root->data<<endl<<root->left->data<<"            "<<root->right->data<<endl;
    // cout<<root->left->left->data<<"    "<<root->left->right->data;
    // cout<<"    "<<root->right->right->data;

    deletion(root, 20);
    cout<<root->right->right->left->data;

    return 0;
}