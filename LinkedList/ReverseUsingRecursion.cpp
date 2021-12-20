#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* next;  
};

struct Node* head;

void ReversePrint(struct Node* p) {
    if (p -> next == NULL)
    {
        head = p;
        printf("%d ", p->data);
        return;
    }
    ReversePrint(p->next); // Recursive call
    struct Node* q = p-> next;
    q -> next = p;
    //printf("%d ", q->data);
    p -> next = NULL;
    printf("%d ", p->data);
}

struct Node* Insert(Node* head,int data) {
    Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp -> data = data;
    temp -> next = NULL;
    if (head == NULL)
    head = temp;
    else {
        Node* temp1 = head;
        while (temp1 -> next!= NULL)
        temp1 = temp1 -> next;
        temp1 -> next = temp;
    }
    return head;    
}


int main() {

    struct Node* head = NULL;
    head = Insert(head, 2);
    head = Insert(head, 4);
    head = Insert(head, 6);
    head = Insert(head, 8);

    cout<<endl<<"Reversed Print: ";
    ReversePrint(head);

    return 0;
}