//insert value in max heap.........
#include<bits/stdc++.h>
using namespace std;
void maxheap(int arr[],int n,int data)
{
    int i,parent;
    i=n;
    arr[n]=data;
    while(i>1)
    {
        parent=(i-1)/2 ;
        if(arr[parent]<arr[i])
        {
            swap(arr[parent],arr[i]);
            i=parent;
        }
        else
        {
            return ;
        }
    }
}
int main()
{
    int arr[20]= {70,50,40,45,35,39,16,10,9};
    int data,n=9,i;
    cout<<"which value do you want to insert?";
    cin>>data;
    maxheap(arr,n,data);
    for(i=0; i<(n+1); i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
