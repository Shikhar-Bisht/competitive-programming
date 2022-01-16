#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,a,b,k,ans=0;
    cin>>n>>a>>b>>k;
    ll var=a+b;
    vector<ll> v;
    while(n--)
    {
        ll temp;
        cin>>temp;
        ll vari=temp%var;
        if(vari>0&&vari<=a)
        {
            ans=ans+1;
            continue;
        }
        ll p=0;
        if(vari==0)
        {
            p=1;
            vari=b;
            if(vari<=a)
            {
                v.push_back(p);
                continue;
            }
        }
        vari=vari-a;
        ll var1=vari/a;
        p=p+var1;
        if(vari%a!=0)
        {
            p++;
        }
        v.push_back(p);
    }
    sort(v.begin(),v.end());
    ll c=0;
    for(ll i=0;i<v.size();i++)
    {
        //cout<<v[i]<<" ";
        c=c+v[i];
        if(c<=k)
        {
            ans++;
        }
        else
        {
            break;
        }
    }
    //cout<<endl;
    cout<<ans;
}
