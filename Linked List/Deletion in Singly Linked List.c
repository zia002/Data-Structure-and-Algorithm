//Delete Node From Start Position & End Position &  User Given Position..........
#include<stdio.h>
#include<stdlib.h>
//Node----Type:
    struct node
    {
        int data;
        struct node*link;
    };
    struct node*head,*newnode,*temp,*prevnode;
//------------------------------------------
//Function---to---Print-----Linked-----List:
//------------------------------------------
void print(int count)
{
temp=head;
    if(count=1)
    {
        printf("Linked List:");
        while(temp!=0)
        {
            printf("%d ",temp->data);
            temp=temp->link;
        }
    }
}
//Main---------Function:
int main()
{
    head=0;
    int choice=1,count=0,pos;
    //-----------------------------------
    //Create----Linked-----List-----Node:
    //-----------------------------------
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter Node Data:");
        scanf("%d",&newnode->data);
        newnode->link=0;
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->link=newnode;
            temp=newnode;
        }
        printf("To Add Node,1 or To Stop,0::");
        scanf("%d",&choice);
    }
    //Print-------Linked-----List:
    print(1);
    //--------------------------------------------
    //Delete---First---Node--From---Linked----List:
    //--------------------------------------------
     printf("\nIf You Want To Delete First Node Enter,1 else 0:");
     scanf("%d",&choice);
     while(choice)
     {
         temp=head;
         head=head->link;
         free(temp);
         count=1;
         choice=0;
     }
    //Print-------Linked-----List:
    print(count);
     //--------------------------------------------
     //Delete---End---Node--From---Linked----List:
     //--------------------------------------------
    printf("\nIf You Want To Delete End Node Enter,1 else 0:");
    scanf("%d",&choice);
     while(choice)
     {
         temp=head;
         while(temp->link!=0)
         {
             prevnode=temp;
             temp=temp->link;
         }
         if(temp==head)
         {
             head=0;
         }
         else
         {
             prevnode->link=0;
         }
         free(temp);
         count=1;
         choice=0;
     } 
    //Print-------Linked-----List:
    print(count);
    //---------------------------------------------------------
    //Delete---User--Given--Position--Node--From--Linked--List:
    //--------------------------------------------------------
    printf("\nWhich Node Want To Delete,Enter Node Position:");
    scanf("%d",&pos);
    int i=1;
    temp=head;
    while(i<pos)
    {
        i=i+1;
        prevnode=temp;
        temp=temp->link;
    }
    if(pos==1)
    {
        temp=head;
        head=head->link;
        free(temp);
        count=1;
    }
    else
    {
        prevnode->link=temp->link;
        free(temp);
        count=1;
    }
    //Print-------Linked-----List:
    print(count);
    return 0;
}
