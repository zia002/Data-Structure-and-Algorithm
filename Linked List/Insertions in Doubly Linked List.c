//Insertion------In---Doubly---Linked---List
#include<stdio.h>
#include<stdlib.h>
void startpoint();
void endpoint();
void anypoint();
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
int choice;
//------------------------------------------
//Function--to--Add--Node---at---any--point:
//------------------------------------------
void anypoint()
{
    int pos;
    printf("\nEnter Which Position Do You Want to insert node?:");
    scanf("%d",&pos);
    if(pos==1)
    {
        startpoint();
    }
    else if(pos>1)
    {
        temp=head;
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter Node Data:");
        scanf("%d",&newnode->data);
        int i=1;
        while(i<(pos-1))
        {
            temp=temp->next;
            i++;
        }
        newnode->prev=temp;
        temp->next->prev=newnode;
        newnode->next=temp->next;
        temp->next=newnode;
    }
}
//------------------------------------------
//Function--to--Add--Node---at---End--point:
//------------------------------------------
void endpoint()
{
    /*NOTE:As tail pointer, already point to the last node
    we can use it to add node at end poin...*/
    printf("\nTo Add Node At End point,1 else,0:");
    scanf("%d",&choice);
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter Node Data:");
        scanf("%d",&newnode->data);
        newnode->next=0;
        tail->next=newnode;
        tail=newnode;
        printf("To Add Again,1 or To stop,0:");
        scanf("%d",&choice);
    }

}
//--------------------------------------------
//Function--to--Add--Node---at---start--point:
//--------------------------------------------
void startpoint()
{
    printf("\nTo Add Node at Start Point,1 or else,0:");
    scanf("%d",&choice);
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter Node Data:");
        scanf("%d",&newnode->data);
        newnode->next=0;
        newnode->prev=0;
        newnode->next=head;
        head=newnode;
        printf("To Add Again,1 or To stop,0:");
        scanf("%d",&choice);
    }
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
void create()
{
    int choice=1;
    head=0;
    int i=1,n;
    printf("How Many Node Do You Want?");
    scanf("%d",&n);
    while(i<=n)
    {

        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter Node Data:");
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
    create();
    //Print---doubly---Linked--List:
    print();
    //Add--Node--start--point:
    startpoint();
    //Print---update--doubly---Linked--List:
    print();
    //Add--Node--End--point:
    endpoint();
    //Print---update--doubly---Linked--List:
    print();
    //Add--Node--at--any--point:
    anypoint();
    //Print---update--doubly---Linked--List:
    print();
    return 0;
}
