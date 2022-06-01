#include<bits/stdc++.h>
using namespace std;
void Reverse_array(int arr[],int n)
{
    int s = 0;
    int e = n-1;
    while(s<e)
    {
        swap(arr[s],arr[e]);
        s+=1;
        e-=1;
    }
}
int main()
{
    int arr[]={2,4,6,8,10,12,14,16};
    int n = sizeof(arr)/sizeof(int);
    //before swapping
    for(int i = 0;i<n;i++)
    {
        cout<<arr[i]<<" ,";
    }
    cout<<"\n";
    Reverse_array(arr,n);
    // after swapping
    for(int i =0; i<n;i++)
    {
        cout<<arr[i]<<" ,";
    }
    cout<<"\n";
    return 0;
}