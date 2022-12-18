#include <bits/stdc++.h>
using namespace std;

class node {
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



node* removedub(node* &head)
{
    if(head==NULL || head->next==NULL)
    {
        return head;
    }
    node* temp = head;
    while(temp->next!=NULL)
    {
        cout<<temp->data<<" "<<endl;
        if(temp->data==temp->next->data)
        {
            
            node*todeletes = temp->next->next;
            cout<<temp->data<<" "<<temp->next->data<<endl;;
            delete todeletes;
            temp->next = temp->next->next;
            

        }else
        {
        temp = temp->next;

        }

    }
    return head;
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

int main()
{
    node* head = NULL;
    
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,2);
    insertattail(head,2);
    node* k = removedub(head);
    display(head);
    
    return 0;
}