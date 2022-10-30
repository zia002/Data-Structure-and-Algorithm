//Insert Node At User Given Position..........
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
    //Insert--Node--At--User--Given--Position--in-Linked---List:
    //------------------------------------------------------
    printf("\nIf You Want To Add Node at a valid position Write,1 or to stop 0:");
    scanf("%d",&choice);
    int pos;
    printf("Which Position Do You Want To Add Node?");
    printf("\nEnter Position Between Start & End:");
    scanf("%d",&pos);
    int count=0;
    while(choice)
    {
        int i=1;
        temp=head;
        while(i<(pos-1))
        {
            temp=temp->link;
            i++;
        }
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter Node Data:");
        scanf("%d",&newnode->data);
        newnode->link=temp->link;
        temp->link=newnode;
        printf("To Add Node,1 or To Stop,0:");
        scanf("%d",&choice);
        count=1;
    }
    //---------------------------------
    //Print---Update----Linked----List:
    //---------------------------------
    temp=head;
    if(count==1)
    {
        printf("Update Linked List:");
        while(temp!=0)
        {
            printf("%d ",temp->data);
            temp=temp->link;
        }
    }
    return 0;
}
