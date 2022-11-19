//------QUEUE-----USING----LINKED---LIST
//--------------------------------------
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
    if(front==0 && rear==0)
    {
        int x;
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->link=0;
        newnode->data=0;
        printf("Enter Data:");
        scanf("%d",&x);
        newnode->data=x;
        front=rear=newnode;
    }
    else
    {
        int x;
        newnode=(struct node*)malloc(sizeof(struct node));
        newnode->link=0;
        newnode->data=0;
        printf("Enter Data:");
        scanf("%d",&x);
        newnode->data=x;
        rear->link=newnode;
        rear=newnode;
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
    else
    {
    printf("Delete Data:");
    printf("%d\n",front->data);
    front=front->link;
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
    if(front==0 && rear==0)
    {
        printf("Empty Queue");
    }
    else
    {
        printf("Queue:");
        while(temp!=0)
        {
            printf("%d ",temp->data);
            temp=temp->link;
        }
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
