#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    if(k==0)
    {
        if(arr[0]-1<1)
        {
            cout<<-1;
        }
        else
        {
            cout<<arr[0]-1;
        }
    }
    else if(k==n)
    {
        cout<<arr[n-1];
    }
    else
    {
        if(arr[k]!=arr[k-1])
        {
            cout<<arr[k-1];
        }
        else
        {
            cout<<-1;
        }
    }
}
