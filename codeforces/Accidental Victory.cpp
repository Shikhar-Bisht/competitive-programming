#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,sum=0,i;
        cin>>n;
        vector<pair<ll,ll>> v;
        for(i=0;i<n;i++)
        {
            pair<ll,ll> p;
            cin>>p.first;
            sum=sum+p.first;
            p.second=i+1;
            v.push_back(p);
        }
        sort(v.rbegin(),v.rend());
        ll var=v[0].first;
        vector<ll> ans;
        for(i=0;i<n;i++)
        {
            while(i<n&&v[i].first==var)
            {
                ans.push_back(v[i].second);
                sum=sum-v[i].first;
                i++;
            }
            if(i==n)
            {
                continue;
            }
            else
            {
                if(sum>=var)
                {
                    ans.push_back(v[i].second);
                    sum=sum-v[i].first;
                    var=v[i].first;
                }
                else
                {
                    break;
                }
            }
        }
        sort(ans.begin(),ans.end());
        cout<<ans.size()<<endl;
        for(i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }

}
