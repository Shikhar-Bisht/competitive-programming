#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long i;
    vector<pair<long long,long long>> v;
    for(i=0; i<n; i++)
    {
        pair<long long,long long> p;
        cin>>p.first>>p.second;
        v.push_back(p);
    }
    sort(v.begin(),v.end());
    long long flag=0,var=v[0].second;
    for(i=1; i<n; i++)
    {
        //cout<<v[i].first<<" "<<v[i].second<<endl;
        if(var>v[i].second)
        {
            if(var>v[i].first)
            {
                flag=1;
                break;
            }
            else
            {
                var=v[i].first;
            }
        }
        else
        {
            var=v[i].second;
        }
    }
    if(flag==1)
    {
        cout<<v[n-1].first;
    }
    else
    {
        cout<<var;
    }
}
