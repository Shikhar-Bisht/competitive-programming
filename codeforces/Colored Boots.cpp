#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    vector<stack<int>> v1(27),v2(27);
    vector<pair<int,int>> ans;
    for(i=0;i<n;i++)
    {
        char temp;
        cin>>temp;
        if(temp=='?')
        {
            v1[26].push(i+1);
        }
        else
        {
            int var=temp-'a';
            v1[var].push(i+1);
        }
    }
    for(i=0;i<n;i++)
    {
        char temp;
        cin>>temp;
        if(temp=='?')
        {
            v2[26].push(i+1);
        }
        else
        {
            int var=temp-'a';
            v2[var].push(i+1);
        }
    }
    for(i=0;i<26;i++)
    {
        while(v1[i].empty()==false&&v2[i].empty()==false)
        {
            int a=v1[i].top(),b=v2[i].top();
            //cout<<a<<" "<<b<<endl;
            ans.push_back(make_pair(a,b));
            v1[i].pop();
            v2[i].pop();
        }
    }
    i=0;
    while(v1[26].empty()==false&&i<27)
    {
        while(v1[26].empty()==false&&v2[i].empty()==false)
        {
            int a=v1[26].top(),b=v2[i].top();
            ans.push_back(make_pair(a,b));
            v1[26].pop();
            v2[i].pop();
        }
        i++;
    }
    i=0;
    while(v2[26].empty()==false&&i<27)
    {
        while(v1[i].empty()==false&&v2[26].empty()==false)
        {
            int a=v1[i].top(),b=v2[26].top();
            ans.push_back(make_pair(a,b));
            v1[i].pop();
            v2[26].pop();
        }
        i++;
    }
    cout<<ans.size()<<endl;
    for(i=0;i<ans.size();i++)
    {
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }
}
