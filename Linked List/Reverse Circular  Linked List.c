//Reverse----Circular---Linked---List
#include<stdio.h>
#include<stdlib.h>
void print();
//-------------
//Node----Type:
//-------------
struct node
{
    int data;
    struct node*next;
};
struct node*head,*newnode,*temp,*tail;
//----------------------------------------------
//Function--to--Reverse--circular--Linked--List:
//----------------------------------------------
void reverse()
{
    struct node*current,*nextnode,*prev;
    current=tail->next;
    nextnode=current->next;
    if(tail==0)
    {
        printf("List Is Empty");
    }
    if(current==tail)
    {
        tail=tail;
        free(current);
        free(nextnode);
    }
    else
    {
        while(current!=tail)
        {
            prev=current;
            current=nextnode;
            nextnode=current->next;
            current->next=prev;
        }
        nextnode->next=tail;
        tail=nextnode;
    }
}
//--------------------------------------------
//Function--to--Print--circular--Linked--List:
//--------------------------------------------
void print()
{
    if(tail==0)
    {
        printf("List Is Empty");
    }
    else
    {
        printf("Circular Linked List:\n");
        temp=tail->next;
        while(temp->next!=tail->next)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("%d",temp->data);
    }
}
//-----------------------------------------------
//Function---to---Create--Circular---Linked---List:
//-----------------------------------------------
void create(int n)
{
    int i=1;
    tail=0;
    while(i<=n)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter Node:%d Data:",i);
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(tail==0)
        {
            tail=newnode;
            tail->next=newnode;
        }
        else
        {
            newnode->next=tail->next;
            tail->next=newnode;
            tail=newnode;
        }
        i=i+1;
    }
}
//---------------------
//Main---------Function:
//---------------------
int main()
{
    //create---Circular---Linked--List:
    int i=1,n,choice;
    printf("How Many Node Do You Want?");
    scanf("%d",&n);
    create(n);
    print();
    //reverse---circular---linked--list:
    printf("\nReversed ");
    reverse();
    print();
    return 0;
}
