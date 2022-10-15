//Selection Sort.....
//Ascending Order....
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,min,n;
     cout<<"Enter Array Size:";
     cin>>n;
     int arr[n];
     cout<<"Enter array value:";
     for(i=0; i<n; i++)
     {
         cin>>arr[i];
     } 
    for(i=0; i<(n-1); i++)
    {
        min=i;
        for(j=(i+1); j<n; j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        if(min!=i)
        {
        swap(arr[i],arr[min]);
        }
    }
    cout<<"Sorted Array In Ascending Order:";
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
