#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,gc,ans=0;
    cin>>n;
    ll arr[n],i;
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            gc=arr[i];
        }
        else
        {
            gc=__gcd(arr[i],gc);
        }
    }
    int sq=sqrt(gc);
    for(i=1;i<=sq;i++)
    {
        if(gc%i==0)
        {
            long long temp=i*i;
            if(temp==gc)
            {
                ans=ans+1;
            }
            else
            {
                ans=ans+2;
            }
        }
    }
    cout<<ans;
}
