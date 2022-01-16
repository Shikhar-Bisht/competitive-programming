#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,ans=0;
        cin>>n>>k;
        ll val[n],w[k],i;
        for(i=0;i<n;i++)
        {
            cin>>val[i];
        }
        for(i=0;i<k;i++)
        {
            cin>>w[i];
        }
        sort(val,val+n);
        sort(w,w+k,greater<int>());
        ll c=k;
        for(i=n-1;i>=0;i--)
        {
            //cout<<val[i]<<" ";
            ans=ans+val[i];
            c--;
            if(c==0)
            {
                break;
            }
        }
        ll j=0;
        i=0;
        while(j<k)
        {
            if(w[j]==1)
            {
                break;
            }
            //cout<<val[i]<<" ";
           ans=ans+val[i];
           i=i+w[j]-1;
           j++;
        }
        ll var=k-j;
        for(i=n-1;i>=0;i--)
        {
            if(var==0)
            {
                break;
            }
            ans=ans+val[i];
            var--;
        }
        //cout<<endl;
        cout<<ans<<endl;
    }
}
