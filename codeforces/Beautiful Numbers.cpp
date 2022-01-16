#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll sumo(ll a,ll b)
{
    ll num=a-b+1;
    ll var=b*num;
    ll var1=num-1;
    ll var2=var1*num;
    var2=var2/2;
    ll ans=var+var2;
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,i;
        cin>>n;
        ll ans[n];
        vector<pair<ll,ll>> v;
        for(i=0;i<n;i++)
        {
            pair<ll,ll> p;
            ll temp;
            cin>>temp;
            p.first=temp;
            p.second=i+1;
            v.push_back(p);
        }
        sort(v.begin(),v.end());
        ans[0]=1;
        ll mini=v[0].second,maxi=v[0].second,sum=v[0].second;
        for(i=1;i<v.size();i++)
        {
            sum=sum+v[i].second;
            if(v[i].second>maxi)
            {
                maxi=v[i].second;
            }
            if(v[i].second<mini)
            {
                mini=v[i].second;
            }
            ll temp;
            temp=sumo(maxi,mini);
            ll var=v[i].first-1;
            if(temp==sum)
            {
                ans[var]=1;
            }
            else
            {
                ans[var]=0;
            }
        }
        for(i=0;i<n;i++)
        {
            cout<<ans[i];
        }
        cout<<endl;
    }
}
