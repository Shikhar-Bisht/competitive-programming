#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
#endif // ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,i,ct=0,ans=0,j,m;
        cin>>n>>m;
        ll arr[n],brr[n];
        vector<ll> v(n+2);
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        ll len=n;
        for(i=0; i<m; i++)
        {
            cin>>brr[i];
        }
        i=0;
        for(j=0; j<m; j++)
        {
            ll in=brr[j];
            if(v[in]==1)
            {
                ans++;
                ct--;
                continue;
            }
            while(i<n)
            {
                //cout<<i<<endl;
                if(arr[i]==in)
                {
                    ll temp=ct*2+1;
                    ans=ans+temp;
                    i++;
                    break;
                }
                v[arr[i]]=1;
                ct++;
                i++;
            }
            //cout<<ans<<" "<<ct<<endl;
        }
        cout<<ans<<endl;
    }
}
