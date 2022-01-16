#include<bits/stdc++.h>
using namespace std;
int maxi=0,n,cnt=0;
void findmax(vector<vector<pair<int,int>>> v,int start,int w,int visited[])
{
    int i;
    //cout<<start<<" "<<w<<endl;
    visited[start]=1;
    cnt=cnt+w;
    /*for(i=0;i<n;i++)
    {
        cout<<visited[i]<<" ";
    }*/
    //cout<<endl;
    for(i=0;i<v[start].size();i++)
    {
        pair<int,int> p;
        p=v[start][i];
        int var1=p.first,var2=p.second;
        /*if(start==1)
        {
            //cout<<var1<<" "<<var2<<" "<<visited[var1]<<endl;
        }*/
        if(visited[var1]==0)
        {
            findmax(v,var1,var2,visited);
        }
    }
    //cout<<cnt<<endl;
    if(cnt>maxi)
    {
        maxi=cnt;
    }
    visited[start]=0;
    cnt=cnt-w;
    return;
}
int main()
{
    int i;
    cin>>n;
    vector<vector<pair<int,int>>> v(n);
    for(i=0;i<n-1;i++)
    {
        int a,b,w;
        cin>>a>>b>>w;
        //cout<<a<<" "<<b<<" "<<w<<endl;
        v[a].push_back(make_pair(b,w));
        v[b].push_back(make_pair(a,w));
    }
    int visited[n],j;
    //cout<<v[0].size()<<endl;
    for(i=0;i<v[0].size();i++)
    {
        //cout<<i<<endl;
        for(j=0;j<n;j++)
        {
            visited[j]=0;
        }
        visited[0]=1;
        pair<int,int> p=v[0][i];
        //cout<<p.first<<" "<<p.second<<endl;
        findmax(v,p.first,p.second,visited);
    }
    cout<<maxi;
}
