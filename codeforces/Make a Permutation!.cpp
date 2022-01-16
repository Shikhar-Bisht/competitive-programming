#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,ans=0;
    cin>>n;
    vector<int> ct(n+1),fl(n+1),arr(n+1);
    queue<int> qu;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        ct[arr[i]]++;
    }
    for(i=1;i<=n;i++)
    {
        if(ct[i]==0)
        {
            ans++;
            qu.push(i);
        }
    }
    for(i=0;i<n;i++)
    {
        if(fl[arr[i]]==1)
        {
            arr[i]=qu.front();
            qu.pop();
        }
        else
        {
            if(ct[arr[i]]>1)
            {
                if(arr[i]>qu.front())
                {
                    //cout<<arr[i]<<" "<<ct[arr[i]]<<endl;
                    ct[arr[i]]--;
                    arr[i]=qu.front();
                    qu.pop();
                }
                else
                {
                    fl[arr[i]]=1;
                }
            }
        }
    }
    cout<<ans<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
