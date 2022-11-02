//Create-----Circular---Linked---List
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
//--------------------------------------------
//Function--to--Print--circular--Linked--List:
//--------------------------------------------
void print()
{
    printf("Circular Linked List:\n");
    printf("head=%d\n",head);
    temp=head;
    while(temp->next!=head)
    {
        printf("data=%d & address=%d\n",temp->data,temp->next);
        temp=temp->next;
    }
    printf("data=%d & address=%d\n",temp->data,temp->next);
}
//-----------------------------------------------
//Function---to---Create--Circular---Linked---List:
//-----------------------------------------------
void create(int n)
{
    int i=1;
    while(i<=n)
    {

        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter Node:%d Data:",i);
        scanf("%d",&newnode->data);
        newnode->next=head;
        if(head==0)
        {
            head=temp=tail=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        temp->next=head;
        i=i+1;
    }
}
//---------------------
//Main---------Function:
//---------------------
int main()
{
    //create---Circular---Linked--List:
    int i=1,n;
    printf("How Many Node Do You Want?");
    scanf("%d",&n);
    create(n);
    print();
    return 0;
}
