#include<bits/stdc++.h>
using namespace std;

int Linear_search(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        //check whether element is present in this
        if(arr[i]==key)
        {
            return i;
        }
    }
    //else out of the loop
    return -1;
}

int main()
{
    int arr[]={10,15,12,9,6,4,3,10,8};
    int n= sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    int index=Linear_search(arr,n,key);
    if(index!=-1)
    {
        cout<<key<<"is present at the index"<<index<<"\n";
    }
    else
    {
        cout<<key<<"is not found"<<"\n";
    }
    return 0;
}