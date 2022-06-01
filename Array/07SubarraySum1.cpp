#include <bits/stdc++.h>
using namespace std;
//brute force approach O(N^3)
int largestSum1(int arr[],int n)
{
    int largest_sum=0;
    for(int i = 0; i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int Subarray_sum = 0;
            for(int k = i;k<=j;k++)
            {
                Subarray_sum += arr[k];
            }
            largest_sum = max(largest_sum,Subarray_sum);
        }
    }
    return largest_sum;
}
int main()
{
    int arr[]={2,-2,5,6,-1,3,5};
    int n = sizeof(arr)/sizeof(int);
    cout<<largestSum1(arr,n);
    return 0;
}