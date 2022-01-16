#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll arr[n],i;
    map<ll,ll> m;
    map<ll,ll>::iterator it;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        m[arr[i]]++;
    }
    ll ma,mn;
    for(it=m.begin();it!=m.end();it++)
    {
        if(it==m.begin())
        {
            ma=it->second;
            mn=it->first;
        }
        else
        {
            if(it->second>ma)
            {
                ma=it->second;
                mn=it->first;
            }
        }
    }
    cout<<n-ma<<endl;
    ll flag=0,j;
    vector<ll> v;
    for(i=0;i<n;i++)
    {
        if(flag==0)
        {
            if(arr[i]>mn)
            {
                v.push_back(2);
                v.push_back(i+1);
                v.push_back(i+2);
            }
            else if(arr[i]<mn)
            {
                v.push_back(1);
                v.push_back(i+1);
                v.push_back(i+2);
            }
            else
            {
                j=v.size()-1;
                while(j>=0)
                {
                    cout<<v[j-2]<<" "<<v[j-1]<<" "<<v[j]<<endl;
                    j=j-3;
                }
                flag=1;
            }
        }
        else
        {
            if(arr[i]>mn)
            {
                cout<<2<<" "<<i+1<<" "<<i<<endl;
            }
            else if(arr[i]<mn)
            {
                cout<<1<<" "<<i+1<<" "<<i<<endl;
            }
        }
    }
}
