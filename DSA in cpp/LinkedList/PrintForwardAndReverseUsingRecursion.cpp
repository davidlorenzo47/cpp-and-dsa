#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* next;  
};

void Print(struct Node* p) {
    if (p == NULL) return;  //Exit condition
    printf("%d ", p->data);  //Print Value in Code
    Print(p->next); // Recursive call
    
}

void ReversePrint(struct Node* p) {
    if (p == NULL)
    return;  //Exit condition
    ReversePrint(p->next); // Recursive call
    printf("%d ", p->data);  //Print Value in Code
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
    
    cout<<"Forward Print: ";
    Print(head);

    cout<<endl<<"Reversed Print: ";
    ReversePrint(head);

    return 0;
}