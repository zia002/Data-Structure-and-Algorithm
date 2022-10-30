//Insert Node At Start Point..........
#include<stdio.h>
#include<stdlib.h>
int main()
{
    //Node----Type:
    struct node
    {
        int data;
        struct node*link;
    };
    struct node*head,*newnode,*temp;
    head=0;
    int choice=1;
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
    //---------------------------------
    //Print----------Linked--------List:
    //---------------------------------
    printf("Linked List:");
    temp=head;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->link;
    }
    //------------------------------------------------------
    //Insert--Node--At--The--Start--Point--in-Linked---List:
    //------------------------------------------------------
    printf("\nIf You Want To Add Node At Start Point Write,1 or to stop 0:");
    scanf("%d",&choice);
    int count=0;
    while(choice)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter Node Data:");
        scanf("%d",&newnode->data);
        newnode->link=0;
        newnode->link=head;
        head=newnode;
        printf("To Add Node,1 or To Stop,0:");
        scanf("%d",&choice);
        count=1;
    }
    //---------------------------------
    //Print---Update----Linked----List:
    //---------------------------------
    if(count==1)
    {
        temp=head;
        printf("Update Linked List:");
        while(temp!=0)
        {
            printf("%d ",temp->data);
            temp=temp->link;
        }
    }
    return 0;
}
