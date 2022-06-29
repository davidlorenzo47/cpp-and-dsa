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


ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode *temp = new ListNode();
    ListNode *last = temp;

    while (list1 != NULL && list2 != NULL)
    {
        if (list1->val < list2->val)
        {
            last->next = list1;
            last = list1;
            list1 = list1->next;
            last->next = NULL;
        }
        else
        {
            last->next = list2;
            last = list2;
            list2 = list2->next;
            last->next = NULL;
        }
        // last = last->next;
    }
    if (list1!=NULL)    last->next = list1;
    if (list2!=NULL)    last->next = list2;
    
    return temp->next;
}

int main()
{

    head = NULL;
    ListNode *root1 = NULL, *root2 = NULL, *root = NULL;
 
    // First linked list
    Insert(&root1, 5);
    Insert(&root1, 20);
    Insert(&root1, 300);
    Insert(&root1, 800);
 
    // Second linked list
    Insert(&root2, 10);
    Insert(&root2, 70);
    Insert(&root2, 100);
    Insert(&root2, 500);
    cout<<"List1 is: ";
    Print(root1);
    cout<<"List2 is: ";
    Print(root2);

    root = mergeTwoLists(root1, root2);
    cout<<"After merging the List is: ";
    Print(root);

    return 0;
}