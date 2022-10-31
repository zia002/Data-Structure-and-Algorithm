//Find-------Out-----Length--or--Number--Of--Node
#include<stdio.h>
#include<stdlib.h>
//Node----Type:
    struct node
    {
        int data;
        struct node*link;
    };
    struct node*head,*newnode,*temp;
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
    int choice=1,count=0;
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
    //-----------------------------------
    //Counting----Linked-----List-----Node:
    //-----------------------------------
    temp=head;
    count=0;
    while(temp!=0)
    {
    count++;
    temp=temp->link;
    }
    printf("\nLength Of The Singly Linked List:%d",count);
    return 0;
}
