//---QUEUE----USING---Circular---Linked--List
//-------------------------------------------
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*link;
};
struct node*front=0;
struct node*rear=0;
struct node*newnode;
//------------------------
//--Insertion---Function--
//------------------------
void enqueue()
{
    if(front==0)
    {
        int x;
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter Data:");
        scanf("%d",&x);
        newnode->data=x;
        newnode->link=0;
        front=rear=newnode;
        rear->link=front;
    }
    else
    {
        int x;
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("Enter Data:");
        scanf("%d",&x);
        newnode->data=x;
        newnode->link=0;
        rear->link=newnode;
        rear=newnode;
        rear->link=front;
    }
}
//------------------------
//---Deletion---Function--
//------------------------
void dequeue()
{
    struct node*del;
    del=front;
    if(front==0)
    {
        printf("Empty Queue\n");
    }
    else if(front==rear)
    {
        printf("Delete Data:%d\n",front->data);
        front=rear=0;
        free(del);
    }
    else
    {
        printf("Delete Data:");
        printf("%d\n",front->data);
        front=front->link;
        rear->link=front;
        free(del);
    }
}
//------------------------
//----display---Function--
//------------------------
void display()
{
    struct node*temp;
    temp=front;
    if(front==0)
    {
        printf("Empty Queue");
    }
    else
    {
        printf("Queue:");
        while(temp->link!=front)
        {
            printf("%d ",temp->data);
            temp=temp->link;
        }
        printf("%d",temp->data);
    }
    printf("\n");
}
//------------------------
//---Main-----Function----
//------------------------
int main()
{
    /*
    to insert value call:enqueue();
    to delete value call:dequeue();
    to display queue call:display();
    */
    enqueue();
    enqueue();
    dequeue();
    display();
    enqueue();
    display();
    return 0;
}
