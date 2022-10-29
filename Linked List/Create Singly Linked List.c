#include<stdio.h>
#include<stdlib.h>
int main()
{
    struct node
    {
        int data;
        struct node*link;
    };
    struct node*head,*newnode,*temp;
    head=0;
    int choice=1;
    while(choice)
    {
        //creating node//
        newnode=(struct node*)malloc(sizeof(struct node));
        //Value//
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
        printf("To add more Node,1 or to stop,0:");    
        scanf("%d",&choice);
    }
    //print value & address:
    temp=head;
    while(temp!=0)
    {
    printf("data=%d & address=%x\n",temp->data,temp->link);
    temp=temp->link;
    }
   return 0;
}
    
