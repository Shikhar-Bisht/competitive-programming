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
    ll n,ans=0,cs=0,i;
    cin>>n;
    vector<ll> alice,bob,none;
    for(i=0; i<n; i++)
    {
        ll s,i;
        cin>>s>>i;
        if(s==11)
        {
            ans=ans+i;
            cs++;
        }
        else if(s==10)
        {
            alice.push_back(i);
        }
        else if(s==01)
        {
            bob.push_back(i);
        }
        else
        {
            none.push_back(i);
        }
    }
    sort(alice.begin(),alice.end());
    sort(bob.begin(),bob.end());
    if(alice.size()>bob.size())
    {
        ll l1=bob.size(),l2=alice.size();
        for(i=1; i<=l1; i++)
        {
            ans=ans+bob[l1-i];
            ans=ans+alice[l2-i];
            bob.pop_back();
            alice.pop_back();
        }
    }
    else
    {
        ll l1=bob.size(),l2=alice.size();
        for(i=1; i<=l2; i++)
        {
            ans=ans+bob[l1-i];
            ans=ans+alice[l2-i];
            bob.pop_back();
            alice.pop_back();
        }
    }
    for(i=0; i<alice.size(); i++)
    {
        none.push_back(alice[i]);
    }
    for(i=0; i<bob.size(); i++)
    {
        none.push_back(bob[i]);
    }
    sort(none.begin(),none.end(),greater<ll>());
    if(none.size()<cs)
    {
        cs=none.size();
    }
    for(i=0; i<cs; i++)
    {
        ans=ans+none[i];
    }
    cout<<ans;
}
