#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,d,i,x,y;
    cin>>n>>d;
    cin>>x>>y;
    vector<pair<ll,ll>> v;
    for(i=0;i<n;i++)
    {
        ll temp1,temp2;
        cin>>temp1;
        cin>>temp2;
        temp1=temp1*x;
        temp2=temp2*y;
        pair<ll,ll> p;
        p.first=temp1+temp2;
        p.second=i+1;
        v.push_back(p);
    }
    sort(v.begin(),v.end());
    ll c=0;
    for(i=0;i<n;i++)
    {
        if(v[i].first<=d)
        {
            c++;
            d=d-v[i].first;
        }
        else
        {
            break;
        }
    }
    cout<<c<<endl;
    for(i=0;i<c;i++)
    {
        cout<<v[i].second<<" ";
    }
}
