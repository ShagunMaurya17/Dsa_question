#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testc;
    cin>>testc;
    while(testc--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int count =0;
        for(int i=0;i<n;i++)
        {
            
            if(arr[i+1]-arr[i]%2==0)
            {
                break;
            }
            else{
                count+=1;
            }
            
            
        }
        cout<<count<<"\n";
    }
        
}