#include<bits/stdc++.h>
using namespace std;
void PrintSubarray(int arr[],int n)
{
    //print all subarray of a given array
    for(int i = 0 ; i<n; i++)
    {
        for(int j = i ; j<n; j++)
        {
            for(int k = i ; k<=j;k++)
            {
                cout<<arr[k]<<" ,";
            }
            cout<<"\n";
        }
    }
}
// print all pairs in an subarray
void AllpairsArray(int arr[],int n)
{
    for(int i = 0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k =0;k<=j;k++)
            {
                cout<<arr[k]<<" ,";
            }
            cout<<"\n";
        }
    }
}
int main()
{
    int arr[]={10,20,30,40,50,60};
    int n = sizeof(arr)/sizeof(int);
    PrintSubarray(arr,n);
    cout<<"all pairs "<<"\n";
    AllpairsArray(arr,n);

    return 0;

}