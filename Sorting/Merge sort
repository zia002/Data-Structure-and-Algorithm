//Merge Sort.................
#include<bits/stdc++.h>
using namespace std;

//for merging two array......

void merge(int arr[],int lb,int mid,int ub)
{
    int i=lb;
    int j=mid+1;
    int k=lb;
    int b[ub+1];
    while(i<=mid && j<=ub)
    {
        if(arr[i]<=arr[j])
        {
            b[k]=arr[i];
            i=i+1;
            k=k+1;
        }
        else
        {
            b[k]=arr[j];
            j=j+1;
            k=k+1;
        }
    }
    if(i>mid)
    {
        while(j<=ub)
        {
            b[k]=arr[j];
            j=j+1;
            k=k+1;
        }
    }
    else
    {
        while(i<=mid)
        {
            b[k]=arr[i];
            i=i+1;
            k=k+1;
        }
    }
  for(k=lb;k<=ub;k++)
    {
    arr[k]=b[k];
    }
}

/* 
for dividing array into two array untill each
array has only one value...
*/

void mergesort(int arr[],int lb,int ub)
{
   int mid;
    if(lb<ub)
    {
    mid=(lb+ub)/2;
    mergesort(arr,lb,mid);
    mergesort(arr,mid+1,ub);
    merge(arr,lb, mid,ub);
    }
}
int main()
{
    int i,n;
    cout<<"Enter Array Size:";
    cin>>n;
    int arr[n];
    int b[n];
    cout<<"Enter array value:";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    mergesort(arr,0,(n-1));
    cout<<"Sorted Array In Ascending Order:";
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
