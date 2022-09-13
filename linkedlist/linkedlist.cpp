#include <bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertattail(node* &head,int val)
{
    node * n = new node(val);
    if(head==NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = n;

}

void insertathead(node* & head,int val)
{
    node* n = new node(val);
    if(head==NULL)
    {
        head = n;
        return;
    }
    node* temp = head;
    n->next = head;
    head = n;
}

void display(node* &head)
{
    node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

node* reverse(node* & head)
{
    node*prev = NULL;
    node* curr = head;
    node* nt;
    while(curr!=NULL)
    {
        nt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nt;
    }
    return prev;
}

void dele(node* & head, int val)
{
    if(head ==NULL)
    {
        return;
    }
    if(head->next==NULL)
    {
        node* tod = head;
        head = head->next;
        delete tod;
        return;
    }
    if(head->data==val)
    {
        node*tod = head;
        head= head->next;
        delete tod;
        return;
    }
    node* temp = head;
    while(temp->next->data!=val)
    {
        temp = temp->next;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

int main()
{
    node* head = NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertathead(head,0);
    dele(head,0);
    display(head);

    return 0;
}