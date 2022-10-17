//Shell Sort
#include<bits/stdc++.h>
using namespace std;
void shellsort(int arr[],int n)
{
    int i,j,gap;
    for(gap=n/2 ; gap>=1 ; gap=gap/2)
    {
        for(j=gap; j<n ; j++)
        {
            for(i=(j-gap) ; i>=0 ; i=(i-gap))
            {
                if(arr[i+gap]>arr[i])
                {
                    break;
                }
                else
                {
                    swap(arr[i+gap],arr[i]);
                }
            }
        }
    }
}

int main()
{
    int n,i;
    cout<<"Enter array size:";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Value:";
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    shellsort(arr,n);
    cout<<"Array Value in Ascending Order:";
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
