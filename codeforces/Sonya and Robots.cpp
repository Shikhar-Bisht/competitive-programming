#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int arr[n],c=0;
    long long ans=0;
    map<int,int> m,vs;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(m[arr[i]]==0)
        {
            c++;
            vs[arr[i]]=0;
        }
        m[arr[i]]++;
    }
    for(i=0;i<n;i++)
    {
        m[arr[i]]--;
        if(m[arr[i]]==0)
        {
            c--;
        }
        if(vs[arr[i]]==0)
        {
            vs[arr[i]]=1;
            ans=ans+c;
        }
    }
    cout<<ans;
}
