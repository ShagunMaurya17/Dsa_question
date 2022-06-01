#include<bits/stdc++.h>
using namespace std;
//using prefix sum to find the subarray sum O(N^2)
int Subarraysum(int arr[],int n)
{
    int prefix[100]={0};
    prefix[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        prefix[i]=prefix[i-1]+arr[i];
    }
    int largest_sum=0;
    for(int i =0;i<n;i++)
    {
        for(int  j =i ; j<n ;j++)
        {
            int subarraySum = i>0 ? prefix[j]-prefix[i-1] : prefix[j];
            largest_sum=max(largest_sum,subarraySum);
        }
        
    }
    return largest_sum;
}
int main()
{
    int arr[]={1,2,-2,1};
    int n = sizeof(arr)/sizeof(int);
    cout<<Subarraysum(arr,n);
    return 0;

}