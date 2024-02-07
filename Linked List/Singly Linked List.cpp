#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node* link;
};
struct node *head=NULL,*current=NULL,*tmp;
int sizeOfList=0;
void addNode(){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    if(head==0){
        head=newnode;
        current=newnode;
        newnode->link=NULL;
        cout<<"Enter Node data:";
        cin>>newnode->data;
        ++sizeOfList;
    }
    else{
        newnode->link=NULL;
        current->link=newnode;
        cout<<"Enter Node Data:";
        cin>>newnode->data;
        current=newnode;
        ++sizeOfList;
    }
}
void removeNode(){
    int position;
    cout<<"Enter Delete data Position:";
    cin>>position;
    if(head==0) cout<<"Empty List"<<endl;
    else if(position>sizeOfList) cout<<"Invalid Position"<<endl;
    else if(position==1){
        tmp=head;
        head=(head->link);
        free(tmp);
        --sizeOfList;
    }
    else{
        int cnt=1;
        tmp=head;
        while(cnt<position-1){
            tmp=tmp->link;
            ++cnt;
        }
        (tmp->link)=(tmp->link)->link;
    }
}
void printList(){
    tmp=head;
    cout<<"Singly Linked List Data:";
    while(tmp!=0){
        cout<<tmp->data<<" ";
        tmp=tmp->link;
    }
    cout<<endl;
}
int main() {
    addNode();
    addNode();
    addNode();
    addNode();
    printList();
    removeNode();
    printList();
    return 0;
}
