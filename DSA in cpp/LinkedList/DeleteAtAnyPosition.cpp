#include <iostream>
using namespace std;

struct Node 
{
    int data;
    Node* next;//stores address of next node
};

struct Node* head;  //global
void Insert(int x) {
    Node* temp = (Node*)malloc(sizeof(struct Node));
    temp -> data = x;
    temp -> next = head ;
    if(head != NULL) temp->next = head;
    head = temp;
}
void Print() {  //if Print(Node* head) then head is local variable for Print
    Node* temp = head;  //in temp variable addresses are modified
    printf("\n List is: ");
    while (temp!=NULL)
    {
        printf(" %d", temp->data);
        temp = temp->next;
    }
    printf("\n");
    
}

void Delete(int n) //Delete the node at nth position
{
    struct Node* temp1 = head;
    if (n == 1) {
        head = temp1 -> next;
        free(temp1);
        return;
    }

    for (int i = 0; i < n-2; i++)
        temp1 = temp1 -> next;
    struct Node* temp2 = temp1-> next;
    temp1 -> next = temp2->next; 
    free(temp2);   
    
}
int main() {

    head = NULL; //empty list
    Insert(2);
    Insert(4);
    Insert(6);
    Insert(5); //List: 2,4,6,5
    Print();

    int n;
    printf("\nEnter a position");
    scanf("%d",&n);
    Delete(n);
    Print();    

    return 0;
}