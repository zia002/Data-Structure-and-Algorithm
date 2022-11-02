//Reverse-----Doubly---Linked---List
#include<stdio.h>
#include<stdlib.h>
void print();
void reverse();
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
//-----------------------------------------------
//Function---to---Reverse--Doubly---Linked---List:
//-----------------------------------------------
void reverse()
{
    struct node*current,*nextnode;
    current=head;
    while(current!=0)
    {
        nextnode=current->next;
        current->next=current->prev;
        current->prev=nextnode;
        current=nextnode;
    }
    current=head;
    head=tail;
    tail=current;
    print();
}
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
void create(int n)
{
    int i=1;
    while(i<=n)
    {

        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter Node:%d Data:",i);
        scanf("%d",&newnode->data);
        newnode->next=0;
        newnode->prev=0;
        if(head==0)
        {
            head=temp=tail=newnode;
        }
        else
        {
            temp->next=newnode;
            newnode->prev=temp;
            temp=newnode;
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
    //create---doubly---Linked--List:
    int i=1,n;
    printf("How Many Node Do You Want?");
    scanf("%d",&n);
    create(n);
    print();
    printf("\nReversed ");
    reverse();
    return 0;
}
