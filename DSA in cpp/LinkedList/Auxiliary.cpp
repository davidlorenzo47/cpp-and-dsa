#include <iostream>
using namespace std;
#include <bits/stdc++.h>

// struct ListNode
// {
//     int data;
//     ListNode* next;
// };
// struct ListNode* head;
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
struct ListNode *head;

void Print(ListNode* root)
{
    while (root != NULL)
    {
        cout << root->val << " ";
        root = root->next;
    }
    cout<<endl;
}

void Insert(ListNode** root, int item)
{
    ListNode *ptr, *temp;
    temp = new ListNode;
    temp->val = item;
    temp->next = NULL;
 
    if (*root == NULL)
        *root = temp;
    else {
        ptr = *root;
        while (ptr->next != NULL)
            ptr = ptr->next;
 
        ptr->next = temp;
    }
}

void deleteNode(ListNode* node) {
        ListNode* temp = node -> next;
		node -> val = temp -> val;
		node -> next = temp -> next;
		delete temp;
    }

ListNode* removeElements(ListNode* head, int val) {
    ListNode* temp = head;
    ListNode* node = head;
    while (temp != NULL)
    {
        if (temp -> val == val)
        {
            node -> val = temp -> val;
            node -> next = temp -> next;
            delete temp;
        }
        else
        {
            node -> val = temp -> val;
            node -> next = temp -> next;
        }
    }
    return temp;
}

ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    while (headA != NULL)
    {
        while (headB != NULL)
        {
            if (headA->next == headB->next)
            {
                return headA->next;
            }
            headB = headB->next;
        }
        
        headA = headA->next;
    }
    return 0;
}

int main()
{

    head = NULL;
    ListNode *root1 = NULL,*root = NULL;
 
    // First linked list
    Insert(&root1, 5);
    Insert(&root1, 20);
    Insert(&root1, 300);
    Insert(&root1, 300);
    Insert(&root1, 800);

    root = (root1);
    cout<<"Answer is: ";
    Print(root);   
    

    return 0;
}