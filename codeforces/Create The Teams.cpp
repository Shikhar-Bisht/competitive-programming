#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x,ans=0;
        cin>>n>>x;
        ll i,arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n,greater<ll>());
        for(i=0;i<n;i++)
        {
            ll c=1;
            while(i<n)
            {
                ll temp=arr[i]*c;
                if(temp>=x)
                {
                    ans++;
                    break;
                }
                c++;
                i++;
            }
        }
        cout<<ans<<endl;
    }
}
