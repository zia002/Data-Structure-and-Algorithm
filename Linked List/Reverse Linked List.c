//Reverse-------The------Linked-----List
/*
From:
10->20->30->40
To:
10<-20<-30<-40
*/
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
void print()
{
    temp=head;
    printf("Linked List:");
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->link;
    }
}
//Main---------Function:
int main()
{
    head=0;
    int n,i;
    //-----------------------------------
    //Create----Linked-----List-----Node:
    //-----------------------------------
    printf("How Many Node Want To Create?:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter Node:%d data:\n",i);
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
    }
    //Print-------Linked-----List:
    print();
    //-----------------------------------
    //Reverse--------Linked---------List:
    //-----------------------------------
    struct node*nextnode,*currentnode,*prevnode;
    prevnode=0;
    nextnode=currentnode=head;
    while(nextnode!=0)
    {
    nextnode=nextnode->link;
    currentnode->link=prevnode;
    prevnode=currentnode;
    currentnode=nextnode;
    }
    head=prevnode;
    //Print---Reversed----Linked-----List:
    printf("\nReversed ");
    print();
    return 0;
}
