#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
node *next;
};
void push(node **head,int data)
{
    node *temp=new node();
    temp->data=data;
    temp->next=*head;
    *head=temp;
}
void revprint(node *head)
{
        if(head!=NULL)
            revprint(head->next);
        else
            return;
        cout<<head->data<<" ";
        return;

}
void print(node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
void rev(node **head)
{
    node *temp=*head;
    node *prev=NULL;
    while(temp->next!=NULL)
    {
        node *var=temp->next;
        temp->next=prev;
        prev=temp;
        temp=var;
    }
    temp->next=prev;
    *head=temp;
}
int main()
{
    node *n=NULL;
    push(&n,5);
    push(&n,4);
    push(&n,3);
    push(&n,2);
    push(&n,1);
    print(n);
    rev(&n);
    print(n);
    return 0;
}
