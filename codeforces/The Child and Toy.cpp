#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m;
    cin>>n>>m;
    long long arr[n],i,ans=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<m;i++)
    {
        int temp1,temp2;
        cin>>temp1>>temp2;
        temp1--;
        temp2--;
        temp1=arr[temp1];
        temp2=arr[temp2];
        ans=ans+min(temp1,temp2);
    }
    cout<<ans;
}
