//Counting Sort
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,max,i;
    cout<<"Enter array size:";
    cin>>n;
    int arr[n],resarray[n];
    cout<<"Enter array value:";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    max=arr[0];
    for(i=1; i<n; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }

    int count[max+1];
    for(i=0; i<(max+1); i++)
    {
        count[i]=0;
    }

    for(i=0; i<n; i++)
    {
        ++count[arr[i]];
    }

    for(i=1; i<=max; i++)
    {
        count[i]=count[i]+count[i-1] ;
    }

    for(i=(n-1); i>=0; i--)
    {
        resarray[--count[arr[i]]]=arr[i];
    }

    for(i=0; i<n; i++)
    {
        cout<<resarray[i]<<" ";
    }
    return 0; 
}
