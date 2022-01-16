#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,var;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int mind=arr[1]-arr[0];
        var=0;
        for(i=0;i<n-1;i++)
        {
            if((arr[i+1]-arr[i])<mind)
            {
                var=i;
                mind=arr[i+1]-arr[i];
            }
        }
        cout<<arr[var]<<" ";
        for(i=var+2;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        for(i=0;i<var;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<arr[var+1]<<endl;
    }
}
