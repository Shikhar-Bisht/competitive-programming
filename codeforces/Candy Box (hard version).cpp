#include<bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
    return(a.second>b.second);
}
bool desc(const pair<int,int> &a,const pair<int,int> &b)
{
    if(a.first==b.first)
    {
        return(a.second>b.second);
    }
    return(a.first>b.first);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        map<int,int> m,m1;
        map<int,int>::iterator it;
        for(i=0;i<n;i++)
        {
            int temp,temp2;
            cin>>temp;
            cin>>temp2;
            m[temp]++;
            if(temp2==1)
            {
                m1[temp]++;
            }
        }
        vector<pair<int,int>> v,v1;
        for(it=m.begin();it!=m.end();it++)
        {
            //cout<<it->first<<" "<<it->second<<endl;
            pair<int,int> p;
            p.first=it->second;
            p.second=m1[it->first];
            v.push_back(p);
        }
        sort(v.begin(),v.end(),desc);
        int l=v.size();
        int ans=0,ans1=0,var;
        for(i=0;i<l;i++)
        {
            if(i==0)
            {
                var=v[i].first;
                ans=ans+var;
            }
            else
            {
                var=min(v[i].first,var);
                ans=ans+var;
            }
            var--;
            if(var==0)
            {
                break;
            }
        }
        var=v[0].first;
        priority_queue<int> pq;
        i=0;
        while(var!=0)
        {
            while(i<l&&v[i].first==var)
            {
                pq.push(v[i].second);
                i++;
            }
            ans1=ans1+min(var,pq.top());
            pq.pop();
            var--;
            if(pq.empty()==true)
            {
                if(i==l)
                {
                    break;
                }
                var=v[i].first;
            }
        }
        cout<<ans<<" "<<ans1<<endl;
        //cout<<ans<<" "<<ans1<<endl;
    }
}
