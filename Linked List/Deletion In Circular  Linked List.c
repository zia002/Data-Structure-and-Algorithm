//Deletion--in----Circular---Linked---List
#include<stdio.h>
#include<stdlib.h>
void print();
void startpoint();
void endpoint();
void anypoint();
int lenghtlist();
//-------------
//Node----Type:
//-------------
struct node
{
    int data;
    struct node*next;
};
struct node*head,*newnode,*temp,*tail,*length;
//-------------------------------------
//Length---Of--Circular---Linked---List:
//--------------------------------------
int lengthlist()
{
    length=tail->next;
    int count=0;
    while(length->next!=tail->next)
    {
        count++;
        length=length->next;
    }
    return count;
}
//---------------------------------------------------------
//Delete--Node--At---Any---Point--in--Circular---Linked---List:
//---------------------------------------------------------
void anypoint()
{

    struct node*prevnode,*current;
    int pos,i=1,len;
    len=lengthlist()+1 ;
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
    printf("Invalid Position");
    }
    else if(pos>1 && pos<len)
    {
        current=tail->next;
        while(i<pos)
        {
        prevnode=current;
        current=current->next;
        }
        prevnode->next=current->next;
        current->next=0;
        free(current);
    }
}
//---------------------------------------------------------
//Delete--Node--At---End---Point--in--Circular---Linked---List:
//---------------------------------------------------------
void endpoint()
{
    struct node*current,*prevnode;
    current=tail->next;
    if(tail==0)
    {
        printf("Empty List");
    }
    if(tail==tail->next)
    {
        tail=0;
    }
    else
    {
        while(current->next!=tail->next)
        {
            prevnode=current;
            current=current->next;
        }
        prevnode->next=tail->next;
        tail=prevnode;
    }
}
//--------------------------------------------------------
//Delete--Node--At-Start-Point--in--Circular---Linked---List:
//--------------------------------------------------------
void startpoint()
{
    if(tail==0)
    {
        printf("Empty List");
    }
    if(tail==tail->next)
    {
        tail=0;
    }
    else
    {
        temp=tail->next;
        tail->next=temp->next;
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
    //Delete---node--start---point:
    printf("\nTo Delete Node at start point,1 else,0:");
    scanf("%d",&choice);
    while(choice)
    {
        startpoint();
        choice=0;
    }
    print();
    //Delete---node--End---point:
    printf("\nTo Delete Node at End point,1 else,0:");
    scanf("%d",&choice);
    while(choice)
    {
        endpoint();
        choice=0;
    }
    print();
    //Delete---node--Any---point:
    printf("\nTo Delete Node at any position,1 else,0:");
    scanf("%d",&choice);
    while(choice)
    {
        anypoint();
        choice=0;
    }
    print();
    return 0;
}
