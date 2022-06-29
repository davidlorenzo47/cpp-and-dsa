#include <iostream>
using namespace std;

struct Node 
{
    int data;
    Node* next;//stores address of next node
};

Node* Insert(Node* head,int data) {
    Node* temp = (struct Node*)malloc(sizeof(struct Node));
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
void Print(Node* head) {  
    while (head != NULL)
    {
        printf(" %d", head -> data);
        head = head -> next;
    }    
    printf("\n");
}

struct Node* Reverse(struct Node* head)
{
    struct Node *current,*prev,*next;

    current = head;
    prev = NULL;
    while (current != NULL)
    {
        next = current -> next;
        current -> next = prev;
        prev = current;
        current = next;
    }     
    head = prev; 
    return head;
}

int main() {

    struct Node* head = NULL;    
    head = Insert(head, 2);
    head = Insert(head, 4);
    head = Insert(head, 6);
    head = Insert(head, 5); //List: 2,4,6,5
    Print(head);
    head = Reverse(head);
    Print(head);

    return 0;
}