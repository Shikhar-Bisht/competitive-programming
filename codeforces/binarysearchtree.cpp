#include<bits/stdc++.h>
using namespace std;
struct bnode
{
    int data;
    bnode* left;
    bnode* right;
};
void inorder(bnode* head)
{
    if(head->left!=NULL)
    {
        inorder(head->left);
    }
    cout<<head->data<<" ";
    if(head->right!=NULL)
    {
        inorder(head->right);
    }

}
void preorder(bnode* head)
{
    cout<<head->data<<" ";
    if(head->left!=NULL)
    {
        preorder(head->left);
    }
    if(head->right!=NULL)
    {
        preorder(head->right);
    }
}
void postorder(bnode* head)
{
    if(head->left!=NULL)
    {
        postorder(head->left);
    }
    if(head->right!=NULL)
    {
        postorder(head->right);
    }
    cout<<head->data<<" ";
}
void push(bnode** head,int data)
{
    if(*head==NULL)
    {
        bnode* temp = new bnode();
        temp->data=data;
        temp->left=0;
        temp->right=0;
        *head=temp;
        return;
    }
    if((*head)->data<=data)
    {
        push(&((*head)->right),data);
    }
    else
    {
        push(&((*head)->left),data);
    }
}
int main()
{
    bnode* head=NULL;
    push(&head,3);
    push(&head,5);
    push(&head,4);
    push(&head,6);
    push(&head,1);
    push(&head,-1);
    push(&head,2);
    inorder(head);
    cout<<endl;
    preorder(head);
    cout<<endl;
    postorder(head);
    return 0;

}
