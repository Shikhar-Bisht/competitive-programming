#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++)
        cin>>arr[i];
    sort(arr,arr+n);
    if(n==1)
    {
        cout<<arr[0];
    }
    else
    {
        for(i=0; i<n/2; i++)
        {
            cout<<arr[i]<<" "<<arr[n-i-1]<<" ";
        }
        if(n%2!=0)
        {
            cout<<arr[n/2];
        }
    }
    return 0;
}
