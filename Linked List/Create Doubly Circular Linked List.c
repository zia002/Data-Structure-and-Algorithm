//Create---Doubly----Circular---Linked---List
#include<stdio.h>
#include<stdlib.h>
void print();
void create();
//-------------
//Node----Type:
//-------------
struct node
{
    int data;
    struct node*next;
    struct node*prev;
};
struct node*head,*newnode,*temp,*tail;

//---------------------------------------
//Print--Doubly---circular--Linked--List:
//---------------------------------------
void print()
{
    temp=head;
    if(temp==0)
    {
        printf("List Is Empty");
    }
    else
    {
        printf("Doubly Circular Linked List:\n");
        while(temp!=tail)
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
    head=0;
    int i=1;
    while(i<=n)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter Node:%d data:",i);
        scanf("%d",&newnode->data);
        newnode->prev=0;
        newnode->next=0;
        if(head==0)
        {
            head=tail=newnode;
            newnode->prev=newnode;
            newnode->next=newnode;
        }
        else
        {
            tail->next=newnode;
            newnode->prev=tail;
            newnode->next=head;
            head->prev=newnode;
            tail=newnode;
        }
        i++;
    }
}
//---------------------
//Main---------Function:
//---------------------
int main()
{
    //create---Circular---Linked--List:
    int n,choice;
    printf("How Many Node Do You Want?");
    scanf("%d",&n);
    create(n);
    print();
    return 0;
}
