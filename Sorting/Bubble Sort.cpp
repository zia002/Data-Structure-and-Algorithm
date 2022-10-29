//Bubble Sort..
//User input array value,and this programme will print out this array with ascending order value.
#include<iostream>
using namespace std;
int main()
{
    int n,i,j,tem,swap;
    cout<<"Enter array size:";
    cin>>n;
    int arr[n];
    cout<<"Enter array value:";
    for(i=0;i<n;i++)
    {
    cin>>arr[i];
    }
    
    for(i=0; i<(n-1); i++)
    {
        for(j=0; j<(n-1-i); j++)
        {
            swap=0;
            if(arr[j]>arr[j+1])
            {
                tem=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tem;
                swap=1;
            }

        }
        if(swap==0)
        {
         goto next;
        }
    }
    next:
    cout<<"Array With Ascending Order:";
    for(j=0; j<n; j++)
    {
        cout<<arr[j]<<" ";
    }
    return 0;
}
