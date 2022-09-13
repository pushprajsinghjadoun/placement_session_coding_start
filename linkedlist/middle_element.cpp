#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node*next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insert(node* & head, int val)
{
    node* n = new node(val);
    if(head==NULL)
    {
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;

    }
    temp->next = n;

}
void display(node* & head)
{
    node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

void middle(node* & head)
{
    node*p1 = head;
    node*p2 = head;
    while(p2!=NULL && p2->next!=NULL)
    {
        p1 = p1->next;
        p2 = p2->next->next;
    }
    cout<<p1->data<<endl;
}

int main()
{
    node* head = NULL;
    insert(head,0);
    insert(head,1);
    insert(head,2);
    insert(head,3);
    middle(head);
    display(head);
    return 0;
}