#include<bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
    return(a.second>b.second);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        map<int,int> m;
        map<int,int>::iterator it;
        for(i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            m[temp]++;
        }
        vector<pair<int,int>> v;
        for(it=m.begin();it!=m.end();it++)
        {
            pair<int,int> p;
            p.first=it->first;
            p.second=it->second;
            v.push_back(p);
        }
        sort(v.begin(),v.end(),sortbysec);
        int l=v.size();
        int ans=0,var;
        for(i=0;i<l;i++)
        {
            if(i==0)
            {
                var=v[i].second;
                ans=ans+var;
            }
            else
            {
                var=min(v[i].second,var);
                ans=ans+var;
            }
            var--;
            if(var==0)
            {
                break;
            }
        }
        cout<<ans<<endl;
    }
}
