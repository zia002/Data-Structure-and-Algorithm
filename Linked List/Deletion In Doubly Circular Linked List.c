//Deletion---in--Doubly----Circular---Linked---List
#include<stdio.h>
#include<stdlib.h>
void print();
void create();
int lengthlist();
void startpoint();
void endpoint();
void anypoint();
void freepoint();
//-------------
//Node----Type:
//-------------
struct node
{
    int data;
    struct node*next;
    struct node*prev;
};
struct node*head,*newnode,*temp,*tail,*length;
//----------------------------------------------
//Length---Of--Doubly--Circular---Linked---List:
//---------------------------------------------
void freepoint()
{
head=0;
}
int lengthlist()
{
    length=head;
    int count=0;
    while(length!=tail)
    {
        count++;
        length=length->next;
    }
    return (count+1);
}
//----------------------------------------------------------
//Delete--Node--at--any---point---Circular---Linked---List:
//----------------------------------------------------------
void anypoint()
{

    if(head==tail)
    {
    freepoint();
    }
    if(head==0)
    {
        printf("Empty List ");
    }
    else
    {
        int pos,i=1,len;
        len=lengthlist();
        printf("Enter Position:");
        scanf("%d",&pos);
        if(pos==1)
        {
            startpoint();
        }
        else if(pos==len)
        {
            endpoint();
        }
        else if(pos<1 || pos>len)
        {
            printf("\n-Invalid Position-\n");
        }
        else if(pos>1 && pos<len)
        {
            temp=head;
            while(i<(pos-1))
            {
                temp=temp->next;
                i++;
            }
            temp->next=temp->next->next;
            temp->next->next=temp;
            free(temp);
        }
    }
}
//----------------------------------------------------------
//Delete--Node--at--start---point---Circular---Linked---List:
//----------------------------------------------------------
void startpoint()
{
    if(head==tail)
    {
    freepoint();
    }
    if(head==0)
    {
        printf("Empty List ");
    }
    else
    {
        temp=head->next;
        temp->prev=head->prev;
        tail->next=temp;
        head=temp;
    }
}
//----------------------------------------------------------
//Delete--Node--at--end---point---Circular---Linked---List:
//----------------------------------------------------------
void endpoint()
{
    if(head==tail)
    {
    freepoint();
    }
    if(head==0)
    {
        printf("Empty List");
    }
    else
    {
        temp=tail->prev;
        temp->next=tail->next;
        head->prev=temp;
        tail=temp;
    }
}
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
    if(n!=0 && n>=1)
    {
        printf("\nTo Delete Node at Start Point,1 else,0:");
        scanf("%d",&choice);
        while(choice)
        {
            startpoint();
            choice=0;
        }
        print();
        printf("\nTo Delete Node at End Point,1 else,0:");
        scanf("%d",&choice);
        while(choice)
        {
            endpoint();
            choice=0;
        }
        print();
        printf("\nTo Delete Node at Any Point,1 else,0:");
        scanf("%d",&choice);
        while(choice)
        {
            anypoint();
            choice=0;
        }
        print();
    }
    return 0;
}
