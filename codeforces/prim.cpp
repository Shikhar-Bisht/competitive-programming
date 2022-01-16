#include<bits/stdc++.h>
using namespace std;
void addedge(vector<vector<pair<int,int>>> &gr,int u,int v,int w)
{
    gr[u].push_back(make_pair(v,w));
    gr[v].push_back(make_pair(u,w));
}
vector<tuple<int,int,int>> prim(vector<vector<pair<int,int>>> &gr,int start)
{
    vector<int> parent(gr.size(),-1);
    vector<int> key(gr.size(),INT_MAX);
    vector<bool> inmst(gr.size(),false);
    key[start]=0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
    pq.push(make_pair(start,0));

    vector<tuple<int,int,int>> result;
    while(pq.empty()==false)
    {
        pair<int,int> p=pq.top();
        int a=p.first;
        pq.pop();
        if(parent[a]!=-1&&inmst[a]==false)
        {
            result.push_back(make_tuple(parent[a],a,key[a]));
        }
        inmst[a]=true;
        int i;
        for(i=0;i<gr[a].size();i++)
        {
            int var=gr[a][i].first;
            int weight=gr[a][i].second;
            if(inmst[var]==false&&key[var]>weight)
            {
                parent[var]=a;
                key[var]=weight;
                pq.push(make_pair(var,key[var]));
            }
        }
    }
    return result;
}
int main()
{
    int v;
    cin>>v;
    vector<vector<pair<int,int>>> gr(v,vector<pair<int,int>>(v));
    int q,i;
    cin>>q;
    for(i=0;i<q;i++)
    {
        int a,b,w;
        cin>>a>>b>>w;
        addedge(gr,a,b,w);
    }
    vector<tuple<int,int,int>> res=prim(gr,0);
    for(tuple<int,int,int> t:res)
    {
        cout<<get<0>(t)<<" "<<get<1>(t)<<" "<<get<2>(t)<<endl;
    }
    return 0;
}
