#include<bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<long long,long long> &a,const pair<long long,long long> &b)
{
    return(a.second<b.second);
}
int main()
{
    long long n,i;
    cin>>n;
    long long ans=0;
    vector<pair<long long,long long>> v;
    map<long long,long long> m;
    for(i=0;i<n;i++)
    {
        pair<long long,long long> p;
        cin>>p.first>>p.second;
        m[p.first]++;
        v.push_back(p);
    }
    sort(v.begin(),v.end());
    for(i=0;i<n;i++)
    {
        long long var=v[i].first,var2=v[i].second,c=0,d=0;
        while(i<n&&v[i].first==var&&v[i].second==var2)
        {
            m[var]--;
            c++;
            i++;
        }
        d=m[var];
        i--;
        long long temp=c*d;
        ans=ans+temp;
    }
    sort(v.begin(),v.end(),sortbysec);
    for(i=0;i<n;i++)
    {
        long long var=v[i].second,c=1;
        i++;
        while(i<n&&v[i].second==var)
        {
            c++;
            i++;
        }
        i--;
        long long temp=c*(c-1);
        temp=temp/2;
        ans=ans+temp;
    }
    cout<<ans;
}
