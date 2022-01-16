#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i;
    long long ans=0;
    cin>>n;
    long long arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(i=0;i<n;i++)
    {
        long long temp=arr[i]*arr[n-i-1];
        ans=(ans+temp)%10007;
    }
    cout<<ans;
}
