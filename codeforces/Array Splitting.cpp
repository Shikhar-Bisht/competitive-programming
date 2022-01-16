#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool descf(const pair<ll,ll> &a,const pair<ll,ll> &b)
{
    return(a.first>b.first);
}
int main()
{
    ll n,k,i;
    cin>>n>>k;
    ll arr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    vector<pair<ll,ll>> v;
    for(i=1; i<n; i++)
    {
        pair<ll,ll> p;
        ll var=arr[i]-arr[i-1];
        p.first=var;
        p.second=i;
        v.push_back(p);
    }
    sort(v.begin(),v.end(),descf);
    vector<ll> vl;
    for(i=0; i<k-1; i++)
    {
        vl.push_back(v[i].second);
    }
    sort(vl.begin(),vl.end());
    vl.push_back(n);
    ll start=0,endg,ans=0;
    for(i=0; i<vl.size(); i++)
    {
        endg=vl[i];
        ll j,maxi,mini;
        for(j=start;j<endg;j++)
        {
            if(j==start)
            {
                maxi=arr[j];
                mini=arr[j];
            }
            else
            {
                if(arr[j]>maxi)
                {
                    maxi=arr[j];
                }
                if(arr[j]<mini)
                {
                    mini=arr[j];
                }
            }
        }
        ans=ans+(maxi-mini);
        start=vl[i];
    }
    cout<<ans;
}
