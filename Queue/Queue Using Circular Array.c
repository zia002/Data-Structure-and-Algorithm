//---QUEUE----USING---Circular---Array
//------------------------------------
#include<stdio.h>
#define N 50
int queue[N];
int front=-1;
int rear=-1;
//------------------------
//--Insertion---Function--
//------------------------
void enqueue()
{
    if((rear+1)%N==front)
    {
        printf("Queue Is Full");
    }
    
    else if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;
        printf("Enter Data:");
        scanf("%d",&queue[rear]);
    }
    else
    {
        rear=(rear+1)%N;
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
        printf("Empty Queue");
    }
    else if(rear==front)
    {
        printf("Delete Data:%d\n",queue[front]);
        front=-1;
        rear=-1;
    }
    else
    {
        printf("Delete Data:%d\n",queue[front]);
        front=(front+1)%N;
    }

}
//------------------------
//----display---Function--
//------------------------
void display()
{
    int i=front;
    if(front==-1)
    {
        printf("Empty Queue");
    }
    else
    {
       printf("Queue:");
         while(i!=rear)
        {
            printf("%d ",queue[i]);
            i=(i+1)%N;
        }
        printf("%d\n",queue[i]);
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
    enqueue();
    dequeue();
    display();
    enqueue();
    display();
    return 0;
}
