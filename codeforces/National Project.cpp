#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,g,b;
        cin>>n>>g>>b;
        ll temp=n/2;
        temp=n-temp;
        if(g>=temp)
        {
            cout<<n<<endl;
            continue;
        }
        ll var=temp/g;
        ll tempr=g+b;
        tempr=tempr*var;
        if(temp%g==0)
        {
            tempr=tempr-b;
        }
        else
        {
            ll c=temp-var*g;
            tempr=tempr+c;
        }
        ll ans=max(tempr,n);
        cout<<ans<<endl;
    }
}
