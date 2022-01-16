#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,i,ans=0;
    cin>>n>>k;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    for(i=0;i<k;i++)
    {
        ans=ans+arr[i];
    }
    cout<<ans;
}
