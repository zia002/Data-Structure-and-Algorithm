//Create------Doubly------Linked-----List
#include<stdio.h>
#include<stdlib.h>
//-------------
//Node----Type:
//-------------
struct node
{
    int data;
    struct node*next;
    struct node*prev;
};
struct node*head,*newnode,*temp;
//------------------------------------------
//Function---to---Print-----Linked-----List:
//------------------------------------------
void print()
{
    temp=head;
    printf("Doubly Linked List:");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
//-----------------------------------------------
//Function---to---Create--Doubly---Linked---List:
//-----------------------------------------------
void create()
{
    int choice=1;
    head=0;
    while(choice)
    {
        
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter Node Data:");
        scanf("%d",&newnode->data);
        newnode->next=0;
        newnode->prev=0;
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
        }
        printf("To Add Node,1 or To Stop,0:");
        scanf("%d",&choice);
    }
}
//---------------------
//Main---------Function:
//---------------------
int main()
{
    create();
    print();
    return 0;
}
