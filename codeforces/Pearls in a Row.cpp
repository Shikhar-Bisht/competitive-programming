#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,s=1;
    cin>>n;
    int arr[n+1];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    map<int,int> m;
    vector<pair<int,int>> ans;
    for(i=1;i<=n;i++)
    {
        if(m[arr[i]]!=0)
        {
            ans.push_back(make_pair(s,i));
            m.clear();
            s=i+1;
        }
        else
        {
            m[arr[i]]=i;
        }
    }

    int a=ans.size();
    if(a==0)
    {
        a=-1;
    }
    else
    {
        ans[a-1].second=n;
    }
    printf("%d\n",a);
    for(i=0;i<ans.size();i++)
    {
        printf("%d %d\n",ans[i].first,ans[i].second);
    }
}
