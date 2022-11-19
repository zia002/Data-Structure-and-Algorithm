//------QUEUE-----USING----ARRAY
//------------------------------
#include<stdio.h>
//------------------------
//---Define--The--Queue---
//------------------------
#define N 50 //Assume that max size is 50
int queue[N];
int rear=-1;
int front=-1;
int x;
//------------------------
//--Insertion---Function--
//------------------------
void enqueue()
{
    if(rear==(N-1))
    {
        printf("Queue Is Full\n");
    }
    else if(rear==-1 && front==-1)
    {
        front++;
        rear++;
        printf("Enter Data:");
        scanf("%d",&queue[rear]);
    }
    else
    {
        rear++;
        printf("Enter Data:");
        scanf("%d",&queue[rear]);
    }
}
//------------------------
//---Deletion---Function--
//------------------------
void dequeue()
{
    if(front==-1)
    {
        printf("Empty Queue\n");
    }
    else if(rear==0)
    {
        printf("Delete Value is:%d\n",queue[front]);
        front=rear=-1;
    }
    else
    {
        printf("Delete Value is:%d\n",queue[front]);
        front++;
    }
}
//------------------------
//----display---Function--
//------------------------
void display()
{
    int i;
    if(front==-1 && rear==-1)
    {
        printf("Empty Queue");
    }
    else
    {
        printf("Queue is:");
        for(i=front; i<(rear+1); i++)
        {
            printf("%d ",queue[i]);
        }
        printf("\n");
    }
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
