#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j;
    cin>>n>>m;
    int arr[n],ans[m];
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<m;i++)
        ans[i]=0;
    sort(arr,arr+n);
    vector<pair<int,int>> v;
    for(i=0;i<m;i++)
    {
        int temp;
        cin>>temp;
        pair<int,int> p;
        p.first=temp;
        p.second=i;
        v.push_back(p);
    }
    sort(v.begin(),v.end());
    i=0;
    j=0;
    while(i<=n&&j<m)
    {
        if(i==n)
        {
            for(j=j;j<m;j++)
            {
                ans[v[j].second]=n;
            }
            break;
        }
        if(arr[i]<=v[j].first)
        {
            i++;
        }
        else
        {
            ans[v[j].second]=i;
            j++;
        }
    }
    for(i=0;i<m;i++)
    {
        cout<<ans[i]<<" ";
    }
}
