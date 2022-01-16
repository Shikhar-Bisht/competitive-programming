#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> gp(100001);
vector<int> inq(100001);
priority_queue<int,vector<int>,greater<int>> p;
vector<int> ans;
void calc(int h)
{
    ans.push_back(h);
    p.pop();
    int i;
    for(i=0;i<gp[h].size();i++)
    {
        if(inq[gp[h][i]]==0)
        {
            inq[gp[h][i]]=1;
            p.push(gp[h][i]);
        }
    }
    if(p.empty()==true)
    {
        return;
    }
    calc(p.top());
}
int main()
{
    int n,m,i;
    cin>>n>>m;
    for(i=0;i<m;i++)
    {
        int a,b;
        cin>>a>>b;
        gp[a].push_back(b);
        gp[b].push_back(a);
    }
    p.push(1);
    inq[1]=1;
    calc(1);
    for(i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}
