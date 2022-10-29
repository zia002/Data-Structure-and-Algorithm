//Radix sort.....
#include<bits/stdc++.h>
using namespace std;
void countsort(int arr[],int n,int pos)
{
    int i,count[n];
    for(i=0;i<n;i++)
    {
    count[i]=0;
    }
    int b[n];
    for(i=0; i<n; i++)
    {
        ++count[(arr[i]/pos)%10];
    }
    for(i=1; i<n; i++)
    {
        count[i]=count[i]+count[i-1] ;
    }
    for(i=(n-1); i>=0; i--)
    {
        b[count[(arr[i]/pos)%10]-1]=arr[i];
        count[(arr[i] / pos) % 10]--;
    }

    for(i=0; i<n; i++)
    {
        arr[i]=b[i];
    }
}
void radix(int arr[],int n,int max)
{
    int pos;
    for(pos=1; (max/pos)>0 ; pos=pos*10)
    {
        countsort(arr,n,pos);
    }
}
int main()
{
    int i,n,max;
    cout<<"Enter array size:";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Value:";
    for(i=0;i<n;i++)
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
    radix(arr,n,max);
    for(i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

