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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,i,ans,maxi=-1;
        cin>>n;
        vector<ll> v(300000,-1);
        for(i=0; i<n; i++)
        {
            ll temp;
            cin>>temp;
            if(v[temp]==-1)
            {
                v[temp]=i;
            }
            else
            {
                ll var=v[temp]+n-i;
                if(var>maxi)
                {
                    maxi=var;
                }
                v[temp]=i;
            }
        }
        cout<<maxi<<endl;
    }
}
