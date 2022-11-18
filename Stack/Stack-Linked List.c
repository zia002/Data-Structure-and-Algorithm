//Stack------Using------Linked-------List.
#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
void peek();
//--------------------
//Node-----Type------
struct node
{
    int data;
    struct node*link;
};
struct node*temp,*top=0,*newnode;
//---------------------
//Insert-----Data---------
void push()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter Data:");
    scanf("%d",&newnode->data);
    newnode->link=top;
    top=newnode;
}
//---------------------
//Delete-----Data------
void pop()
{
    struct node*temp;
    temp=top;
    if(temp==0)
    {
        printf("Stack Is Empty\n");
    }
    else
    {
        top=temp->link;
        free(temp);
    }
}
//-------------------------
//Display---Stack---Data---
void display()
{
    struct node*temp;
    temp=top;
    if(temp==0)
    {
        printf("Stack Is Empty\n");
    }
    else
    {
        printf("Stack Data:\n");
        while(temp!=0)
        {
            printf("%d\n",temp->data);
            temp=temp->link;
        }
    }
}
//---------------------------
//Display---Topmost---Data---
void peek()
{
    printf("Top Most Data In Stack:");
    printf("%d\n",top->data);
}
//-------------------------
//Main--------Function-----
int main()
{
    int choice;
    //------------Push:
    printf("To Store Data In stack,1 else,0:");
    scanf("%d",&choice);
    while(choice)
    {
        push();
        printf("To Continue,1 else,0:");
        scanf("%d",&choice);
    }
    //-------------pop:
    printf("To Pop Data,1 else,0:");
    scanf("%d",&choice);
    while(choice)
    {
        pop();
        printf("To Continue,1 else,0:");
        scanf("%d",&choice);
    }
    //-----------Peek:
    printf("To Display Topmost Data,1 else,0:");
    scanf("%d",&choice);
    while(choice)
    {
        peek();
        choice=0;
    }

    //-----------Display:
    printf("To Display Data,1 else,0:");
    scanf("%d",&choice);
    while(choice)
    {
        display();
        choice=0;
    }

    return 0;
}
