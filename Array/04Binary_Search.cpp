#include<bits/stdc++.h>
using namespace std;

int Binary_search(int arr[],int n,int key)
{
    //implenent binary search
    int s = 0;
    int e = n-1;
    while(s<=e)
    {
        int mid = (s+e)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>=key)
        {
            e = mid-1;
        }
        else
        {
            s = mid+1;
        }
    }
    return -1;
}
int main()
{
    int arr[]={1,2,3,4,5,8,9,10};
    int n= sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    int index = Binary_search(arr,n,key);
    if(index!=-1)
    {
        cout<<key<<"is found on the index of "<<index<<"\n";
    }
    else
    {
        cout<<key<<"is not found"<<"\n";
    }
    return 0;
}