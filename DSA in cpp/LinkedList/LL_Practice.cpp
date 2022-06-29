#include <iostream>
using namespace std;
#include <bits/stdc++.h>

// struct ListNode
// {
//     int data;
//     ListNode* next;
// };
// struct ListNode* head;
template <class T>
void display(vector<T> &v) {
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
        //cout<<v.at(i)<<" ";
    }
    cout<<endl;
}

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
struct ListNode *head;

void Print()
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

void Insert(int val, int n)
{
    ListNode *temp1 = new ListNode();
    temp1->val = val;
    temp1->next = NULL;
    if (n == 1)
    {
        temp1->next = head;
        head = temp1;
        return;
    }
    ListNode *temp2 = head;
    for (int i = 0; i < n - 2; i++)
    {
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
    temp2->next = temp1;
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

void Reverse()
{
    ListNode* r = head;
    ListNode* l = NULL;
    ListNode* c = NULL;
    while (r)
    {
        l = c;
        c = r;
        r = r->next;
        c->next = l;
    }
    head = c;
}

void RecurReverse(ListNode *q, ListNode *p){
    if (p != NULL)
    {
        RecurReverse(p, p->next);
        p->next = q;
    }
    else
    {
        head = q;
    }
    
    
}


int main()
{

    head = NULL;
    Insert(20, 1);
    Insert(30, 2);
    Insert(40, 3);
    Insert(50, 4);
    Insert(60, 5);

    cout<<"Before reverse: ";
    Print();

    cout<<"\nAfter reverse: ";
    RecurReverse(NULL, head);
    Print();

    return 0;
}