//Quick Sort.....
#include<bits/stdc++.h>
using namespace std;
/*
Partition..........................
*/
int partition(int arr[],int lb,int ub)
{
    int pivot,start,end;
    pivot=arr[lb];
    start=lb;
    end=ub;
    while(start<end)
    {
        while(arr[start]<=pivot)
        {
            start=start+1;
        }
        while(arr[end]>pivot)
        {
            end=end-1;
        }
        if(start<end)
        {
            swap(arr[start],arr[end]);
        }
    }
    swap(arr[lb],arr[end]);
    return end;
}
/*
Quick Sorting..........................
*/
void quicksort(int arr[],int lb,int ub)
{
    if(lb<ub)
    {       
    int loc;
    loc=partition(arr,lb,ub);
    quicksort(arr,lb,loc-1);
    quicksort(arr,loc+1,ub);
    }
}
int main()
{
    int i,n;
    cout<<"Enter Array Size:";
    cin>>n;
    int arr[n];
    cout<<"Enter array value:";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    quicksort(arr,0,(n-1));
    cout<<"Sorted Array In Ascending Order:";
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
