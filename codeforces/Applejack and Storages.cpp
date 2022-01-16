#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,i,c2=0,c4=0,c6=0,c8=0;
    cin>>n;
    map<ll,ll> m;
    for(i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        m[temp]++;
    }
    map<ll,ll>::iterator it;
    for(it=m.begin();it!=m.end();it++)
    {
        ll tempr=it->second;
        if(tempr>=8)
        {
            c8++;
        }
        else if(tempr>=6)
        {
            c6++;
        }
        else if(tempr>=4)
        {
            c4++;
        }
        else if(tempr>=2)
        {
            c2++;
        }
    }
    ll q;
    cin>>q;
    while(q--)
    {
        char c;
        ll tempr,var;
        cin>>c>>var;
        tempr=m[var];
        if(c=='+')
        {
            m[var]++;
        }
        else
        {
            m[var]--;
        }
        if(tempr>=8)
        {
            c8--;
        }
        else if(tempr>=6)
        {
            c6--;
        }
        else if(tempr>=4)
        {
            c4--;
        }
        else if(tempr>=2)
        {
            c2--;
        }
        tempr=m[var];
        if(tempr>=8)
        {
            c8++;
        }
        else if(tempr>=6)
        {
            c6++;
        }
        else if(tempr>=4)
        {
            c4++;
        }
        else if(tempr>=2)
        {
            c2++;
        }
        if(c8>0)
        {
            cout<<"YES"<<endl;
        }
        else if(c6>1)
        {
            cout<<"YES"<<endl;
        }
        else if(c6==1&&(c4>0||c2>0))
        {
            cout<<"YES"<<endl;
        }
        else if(c4>1)
        {
            cout<<"YES"<<endl;
        }
        else if(c4==1&&c2>=2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
