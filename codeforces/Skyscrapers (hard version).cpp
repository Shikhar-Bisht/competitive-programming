#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,i,j,ans=0;
    ll sum=0;
    cin>>n;
    vector<ll> v(n);
    vector<ll> sml(n),smr(n);
    for(i=0; i<n; i++)
    {
        cin>>v[i];
    }
    vector<pair<ll,ll>> sp;
    for(i=0; i<n; i++)
    {
        ll var=i;
        int flag=0;
        for(j=sp.size()-1; j>=0; j--)
        {
            ll temp=sp[j].first;
            if(temp==v[i])
            {
                flag=1;
                break;
            }
            else if(temp<v[i])
            {
                break;
            }
            else
            {
                ll temp1;
                ll tempr=var-sp[j].second;
                var=sp[j].second;
                temp1=temp*tempr;
                sum=sum-temp1;
                sp.pop_back();
            }
        }
        if(flag==0)
        {
            sp.push_back(make_pair(v[i],var));
        }
        ll temp1=i-var+1;
        temp1=temp1*v[i];
        sum=sum+temp1;
        sml[i]=sum;
    }
    sp.clear();
    sum=0;
    for(i=n-1; i>=0; i--)
    {
        ll var=i;
        int flag=0;
        for(j=sp.size()-1; j>=0; j--)
        {
            ll temp=sp[j].first;
            if(temp==v[i])
            {
                flag=1;
                break;
            }
            else if(temp<v[i])
            {
                break;
            }
            else
            {
                ll temp1;
                ll tempr=sp[j].second-var;
                var=sp[j].second;
                temp1=temp*tempr;
                sum=sum-temp1;
                sp.pop_back();
            }
        }
        if(flag==0)
        {
            sp.push_back(make_pair(v[i],var));
        }
        ll temp1=var-i+1;
        temp1=temp1*v[i];
        sum=sum+temp1;
        smr[i]=sum;
    }
    ll cr;
    for(i=0; i<n; i++)
    {
        ll temp=sml[i]+smr[i];
        temp=temp-v[i];
        if(temp>ans)
        {
            ans=temp;
            cr=i;
        }
    }
    ll var1=v[cr];
    for(i=cr+1;i<n;i++)
    {
        var1=min(v[i],var1);
        v[i]=var1;
    }
    var1=v[cr];
    for(i=cr-1;i>=0;i--)
    {
        var1=min(v[i],var1);
        v[i]=var1;
    }
    for(i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}
