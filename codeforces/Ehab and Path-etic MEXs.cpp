#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    vector<vector<int>> g(n+1);
    vector<pair<int,int>> nd;
    for(i=0;i<n-1;i++)
    {
        int a,b;
        cin>>a>>b;
        g[a].push_back(b);
        g[b].push_back(a);
        pair<int,int> p;
        p.first=a;
        p.second=b;
        nd.push_back(p);
    }
    int s=0,en=n-2;
    for(i=0;i<nd.size();i++)
    {
        int a=nd[i].first,b=nd[i].second;
        //cout<<a<<" "<<b<<" ";
        if(g[a].size()==1||g[b].size()==1)
        {
            cout<<s<<endl;
            s++;
        }
        else
        {
            cout<<en<<endl;
            en--;
        }
    }
}
