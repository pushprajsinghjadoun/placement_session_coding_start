#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node*next;
    static int i ;
    node(int val)
    {
        data = val;
        next =NULL; 
        i= i+1;
    }

};
int node::i=0;
void insertattail(node* &head, int val)
{
    node*n = new node(val);
    if(head==NULL)
    {
        head = n;
        return;
    }
    node*temp = head;
    while(temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = n;

}
void display(node* &head)
{
    node* temp = head;
    if(temp==NULL)
    {
        return;
    }
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

node* rotatebyk(node*&head, int k)
{   
    if(k==0 || k==head->i)
    {
        return head;
    }

    int c = 0;
    node* tempa = head;
    node* tempb = head;
    node*prev = head;
    while(c<k && tempa!=NULL)
    {
        c +=1;
        prev =tempa;
        tempa = tempa->next;
        
    }
    prev->next = NULL;
    head = tempa;
    while(tempa->next!=NULL)
    {
        tempa = tempa->next;
        
    }
    tempa->next = tempb;

    return head;
}

node* rotatebykclockwise(node* &head, int k )
{
    if(k==0 || k==head->i)
    {
        return head;
    }
    int gg = head->i;
    node*tempa = head;
    node*tempb = head;
    int c=0;
    node* prev = head;
    while( (c<(gg-k)) && tempa!=NULL)
    {
        c+=1;
        prev = tempa;
        tempa = tempa->next;
    }
    prev->next  = NULL;
    node* res = tempa;
    while(tempa->next!=NULL)
    {
        tempa = tempa->next;
    }
    tempa->next = head;
    return res;


}

int main()
{
    node*head = NULL;
    insertattail(head,1);
    insertattail(head,2);
    insertattail(head,3);
    insertattail(head,4);
    insertattail(head,5);
    // node*g = rotatebyk(head,4);
    // display(g);
    node* rk = rotatebykclockwise(head, 3);
    display(rk);
    return 0;
}