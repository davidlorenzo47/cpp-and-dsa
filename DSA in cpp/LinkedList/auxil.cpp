#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};
struct Node* head;

void insert(int x) {
    Node* temp = (Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = head;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        Node* ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = temp;
        
    }
}
void printList() {
    if (head == NULL)
    {
        cout<<"List is Empty";
    }
    else
    {
        Node* temp = head;
        while (temp != head)
        {
            cout<<temp->data;
        }
        temp->next;
    }
}

int main() {

    Node s;
    Node* n = new Node();

    insert(5);
    insert(6);
    insert(10);

    printList();

    return 0;
}