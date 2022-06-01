#include <bits/stdc++.h>
using namespace std;
void PrintArray(int * arr,int n)
{
    cout<<"in function"<<sizeof(arr);
    arr[0]=100;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\n";
    }

}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(int);
    PrintArray(arr,n);
    cout<<"in main"<<sizeof(arr)<<"\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<"\n";
    }
    return 0;
}