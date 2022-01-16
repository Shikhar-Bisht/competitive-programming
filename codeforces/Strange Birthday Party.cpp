#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int arr[n],brr[m],i=0,j=0;
        long long ans=0;
        for(i=0;i<n;i++)
            cin>>arr[i];
        for(i=0;i<m;i++)
            cin>>brr[i];
        sort(arr,arr+n,greater<int>());
        for(i=0;i<n;i++)
        {
            int temp=arr[i]-1;
            if(temp>j)
            {
                ans=ans+brr[j];
                j++;
            }
            else
            {
                ans=ans+brr[temp];
            }
        }
        cout<<ans<<endl;
    }
}
