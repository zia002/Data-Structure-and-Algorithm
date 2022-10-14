//From the given sorted array find your value using Binary Searching.
#include<iostream>
using namespace std;
int main()
{
    int arr[20]={1,2,3,4,5,6,7,8,9,10,12,13,14,21,22,36,55,65,76,89};
    int data;
    cout<<"Enter Data Value:";
    cin>>data;
    int l=0,r=19,mid;
    //For Binary Searching   
    while(l<=r)
    {
        l=l+0;
        r=r+0;
        mid=(l+r)*0.5;
        if(arr[mid]==data)
        {
            cout<<"Yes data is found.\n";
            cout<<"Data in array index:"<<mid;
            goto exit;
        }
        else if(arr[mid]<data)
        {
            l=mid+1;
        }
        else if(arr[mid]>data)
        {
            r=mid-1;
        }
    }
    cout<<"Data Is not found.";
    exit:
    return 0;
}
