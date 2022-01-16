#include<bits/stdc++.h>
using namespace std;
int ans=0;
vector<int> visited(100000,0);
vector<int> v[228228];
void calcnd(int arr[],int h,int m,int ct)
{
    //cout<<h<<"  "<<v[h].size()<<endl;
    visited[h-1]=1;
    if(arr[h-1]==1)
    {
        ct++;
    }
    else
    {
        ct=0;
    }
    //cout<<h<<" "<<ct<<endl;
    if(ct>m)
    {
        ct--;
        return;
    }
    if(v[h].size()==1&&visited[v[h][0]-1]==1)
    {
        //cout<<h<<endl;
        ans++;
        return;
    }
    int i;
    for(i=0;i<v[h].size();i++)
    {
        if(visited[v[h][i]-1]==0)
            calcnd(arr,v[h][i],m,ct);
    }
    if(arr[h-1]==1)
    {
        ct--;
    }
    //cout<<ans<<endl<<endl;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n-1;i++)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int ct=0;
    calcnd(arr,1,m,ct);
    cout<<ans;
}

