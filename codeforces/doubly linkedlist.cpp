#include<bits/stdc++.h>
using namespace std;
struct node
{
    int  data;
    node* next;
    node* perv;
};
node* getnode(int x)
{
    node* newnode= new node();
    newnode->data=x;
    newnode->next=NULL;
    newnode->perv=NULL;
    return newnode;
}
void inserthead(node** head,int x)
{
    node *newnode=getnode(x);
    if(*head==NULL)
    {
        *head=newnode;
        return;
    }
    newnode->next=*head;
    (*head)->perv=newnode;
    *head=newnode;
}
void print(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
void rev(node** head)
{
    node *temp=*head;
    while(temp->next!=NULL)
    {
        node* var=temp->perv;
        temp->perv=temp->next;
        temp->next=var;
        temp=temp->perv;
    }
    temp->next=temp->perv;
    temp->perv=NULL;
    *head=temp;
}
int main()
{
    node* head=NULL;
    inserthead(&head,5);
    inserthead(&head,4);
    inserthead(&head,3);
    inserthead(&head,2);
    inserthead(&head,1);
    print(head);
    rev(&head);
    cout<<endl;
    print(head);
    return 0;
}
