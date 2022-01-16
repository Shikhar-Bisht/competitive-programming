#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll arr[n],i,maxi,ans=0;
    map<ll,ll> m;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        m[arr[i]]++;
        if(i==0)
        {
            maxi=arr[i];
        }
        else
        {
            if(arr[i]>maxi)
            {
                maxi=arr[i];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        m[arr[i]]--;
        long long temp=arr[i],range=pow(10,18),nrange=pow(10,9);
        long long j=1;
        long long flag=0;
        long long var=pow(2,j);
        while(var<range)
        {
            long long diff=var-temp;
            if(diff<=0)
            {
                j++;
                var=pow(2,j);
                continue;
            }
            if(diff>maxi||diff>nrange)
            {
                break;
            }
            if(m[diff]>0)
            {
                //cout<<diff<<endl;
                flag=1;
                break;
            }
            j++;
            var=pow(2,j);
        }
        if(flag==0)
        {
            ans++;
        }
        m[arr[i]]++;
    }
    cout<<ans;
}
