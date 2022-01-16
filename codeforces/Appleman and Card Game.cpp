#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,i;
    long long ans=0;
    cin>>n>>k;
    string s;
    cin>>s;
    map<char,long long> m;
    for(i=0;i<n;i++)
    {
        m[s[i]]++;
    }
    map<char,long long>::iterator it;
    vector<long long> v;
    for(it=m.begin();it!=m.end();it++)
    {
        v.push_back(it->second);
    }
    sort(v.begin(),v.end(),greater<long long>());
    for(i=0;i<v.size();i++)
    {
        if(k==0)
        {
            break;
        }
        else
        {
            if(k>v[i])
            {
                long long temp=v[i]*v[i];
                ans=ans+temp;
                k=k-v[i];
            }
            else
            {
                long long temp=k*k;
                ans=ans+temp;
                k=0;
            }
        }
    }
    cout<<ans;
}
