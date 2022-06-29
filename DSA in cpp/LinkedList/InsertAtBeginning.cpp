#include <iostream>
using namespace std;

struct Node 
{
    int data;
    Node* next;//stores address of next node
};

struct Node* head;
void Insert(int x) {
    Node* temp = (Node*)malloc(sizeof(struct Node));
    temp -> data = x;
    temp -> next = head ;
    //if(head != NULL) temp->next = head;
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

int main() {

    head = NULL; //empty list
    int n,x;
    printf("\n How many numbers? ");
    scanf("%d",&n);

    for (int i = 0; i < n; i++)
    {
        printf("\nEnter the value :");
        scanf("%d",&x);
        Insert(x);
        Print();
    }
    

    return 0;
}