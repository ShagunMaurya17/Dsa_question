#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[100]={-1};
    cout<<"Enter no. of student";
    int n;
    cin>>n;
    //input
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        a[i]=a[i]*2;
    }
    //output
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<",";
    }
    cout<< endl;
}