#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll k,i;
    cin>>k;
    vector<ll> v[k];
    ll sum[k];
    map<ll,int> m[k];
    map<ll,int>::iterator it;
    for(i=0;i<k;i++)
    {
        ll n,j,s=0;
        cin>>n;
        for(j=0;j<n;i++)
        {
            ll temp;
            cin>>temp;
            s=s+temp;
            m[i][temp]=1;
            v[i].push_back(temp);
        }
        sum[i]=s;
    }
    for(i=0;i<k;i++)
    {
        for(it=m[i].begin();it!=m[i].end();it++)
        {
            cout<<it->first<<" "<<it->second<<endl;
        }
        cout<<endl;
    }
}
