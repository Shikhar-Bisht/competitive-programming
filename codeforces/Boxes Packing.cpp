#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,ans=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    map<int,int> m;
    map<int,int>::iterator it;
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            m[arr[i]]++;
        }
        else
        {
            it=m.begin();
            if(it->first<arr[i])
            {
                m[it->first]--;
                if(it->second==0)
                {
                    m.erase(it->first);
                }
            }
            m[arr[i]]++;
        }
    }
    for(it=m.begin();it!=m.end();it++)
    {
        ans=ans+it->second;
    }
    cout<<ans;
}
