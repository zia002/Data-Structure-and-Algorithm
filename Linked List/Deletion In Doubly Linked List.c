//Deletions------In---Doubly---Linked---List
#include<stdio.h>
#include<stdlib.h>
void startpoint();
void endpoint();
void anypoint();
void print();
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
//---------------------------------------------
//Function--to--Delete--Node---at---any--point:
//---------------------------------------------
void anypoint(int n)
{
    int pos,i=1;
    printf("Enter Position:");
    scanf("%d",&pos);
    if(pos==1)
    {
        startpoint();
    }
    else if(pos==n)
    {
    endpoint();
    }
    else
    {
        temp=head;
        while(i<(pos-1))
        {
            temp=temp->next;
            i++;
        }
        temp->next=temp->next->next;
        temp->next->prev=temp;
        print();
    }
    
}
//---------------------------------------------
//Function--to--Delete--Node---at---End--point:
//---------------------------------------------
void endpoint()
{

    struct node*del;
    del=tail;
    tail->prev->next=0;
    tail=tail->prev;
    print();
}
//--------------------------------------------
//Function--to--Delete--Node---at---start--point:
//--------------------------------------------
void startpoint()
{
    if(head==0)
    {
        printf("List Is Empty\n");
        choice=0;
    }
    else
    {
        temp=head;
        head=temp->next;
        temp->prev=0;
        free(temp);
        print();
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
    //Print---doubly---Linked--List:
    print();
   //Delete---Start---Node:
    printf("\nIf You Want To Delete First Node,1 else 0:");
    scanf("%d",&choice);
    while(choice)
    {
        startpoint();
        //Print--Update--doubly---Linked--List:
        choice=0;
    }
    if(head!=0)
    {
        //Delete---End---Node:
        printf("\nIf You Want To Delete End Node,1 else 0:");
        scanf("%d",&choice);
        while(choice)
        {
            endpoint();
            //Print--Update--doubly---Linked--List:
            choice=0;
        }
    } 
       
    if(head!=0)
    {
        //Delete---any---Node:
        printf("\nIf You Want To Delete Any Node from Start To before End,1 else 0:");
        scanf("%d",&choice);
        while(choice)
        {
            anypoint(n);
            //Print--Update--doubly---Linked--List:
            choice=0;
        }
    }
    return 0;
}
