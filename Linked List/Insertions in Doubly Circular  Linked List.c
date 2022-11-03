//Insertion---in--Doubly----Circular---Linked---List
#include<stdio.h>
#include<stdlib.h>
void print();
void create();
int lengthlist();
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
struct node*head,*newnode,*temp,*tail,*length;

//----------------------------------------------
//Length---Of--Doubly--Circular---Linked---List:
//---------------------------------------------
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
//Insert--Node--at--any---point---Circular---Linked---List:
//----------------------------------------------------------
void anypoint()
{

    int pos,i=1,len;
    len=lengthlist();
    printf("Enter Position:");
    scanf("%d",&pos);
    if(pos==1)
    {
        startpoint();
    }
    else if(pos==(len+1))
    {
        endpoint();
    }
    else if(pos<1 || pos>(len+1))
    {
        printf("\n--Invalid Position--\n");
    }
    else if(pos>1 && pos<=len)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter Node data:");
        scanf("%d",&newnode->data);
        newnode->prev=0;
        newnode->next=0;
        temp=head;
        while(i<(pos-1))
        {
            temp=temp->next;
            i++;
        }
        newnode->prev=temp;
        newnode->next=temp->next;
        temp->next->next=newnode;
        temp->next=newnode;
    }
}
//----------------------------------------------------------
//Insert--Node--at--start---point---Circular---Linked---List:
//----------------------------------------------------------
void startpoint()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter Node data:");
    scanf("%d",&newnode->data);
    newnode->prev=0;
    newnode->next=0;
    head=newnode;
    tail->next->prev=newnode;
    head->next=tail->next;
    tail->next=newnode;
    head->prev=tail;

}
//----------------------------------------------------------
//Insert--Node--at--end---point---Circular---Linked---List:
//----------------------------------------------------------
void endpoint()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter Node data:");
    scanf("%d",&newnode->data);
    newnode->prev=0;
    newnode->next=0;
    head->prev=newnode;
    newnode->next=head;
    newnode->prev=tail;
    tail->next=newnode;
    tail=newnode;

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
    printf("\nTo Add Node at Start Point,1 else,0:");
    scanf("%d",&choice);
    while(choice)
    {
        startpoint();
        choice=0;
    }
    print();
    printf("\nTo Add Node at End Point,1 else,0:");
    scanf("%d",&choice);
    while(choice)
    {
        endpoint();
        choice=0;
    }
    print();
    printf("\nTo Add Node at Any Point,1 else,0:");
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
