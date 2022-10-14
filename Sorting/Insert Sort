//Insert Sort.....
#include<iostream>
using namespace std;
int main()
{
    int i,tem,n;
    cout<<"Enter Array Size:";
    cin>>n;
    int arr[n];
    cout<<"Enter array value:";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(i=1; i<n; i++)
    {
        tem=arr[i];
        while((i-1)>=0 && arr[i-1]>tem)
        {
            arr[i]=arr[i-1];
            i=i-1;
        }
        arr[i]=tem;
    }
    cout<<"Sorted Array In Ascending Order:";
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
