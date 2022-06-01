#include<bits/stdc++.h>
using namespace std;
int SubarraySum_kadane(int arr[],int n)
{
    int largest = 0;
    int cs=0;
    //order of n
    for(int i =0;i<n;i++)
    {
        cs = cs + arr[i];
        if(cs<0)
        {
            cs=0;
        }
        largest = max(largest,cs);
    }
    return largest;
}
int main()
{
    int arr[]={1,2,-15,4,5,-15,-19};
    int n = sizeof(arr)/sizeof(int);
    cout<<SubarraySum_kadane(arr,n);
    return 0;
}