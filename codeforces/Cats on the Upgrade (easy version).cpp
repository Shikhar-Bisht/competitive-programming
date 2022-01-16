#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
#endif // ONLINE_JUDGE
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,q;
    ll ans=0;
    cin>>n>>q;
    string st;
    cin>>st;
    while(q--)
    {
        ll t,a,b,i,pc=0,ans=0;
        cin>>t>>a>>b;
        stack<ll> s;
        s.push(0);
        for(i=a-1; i<b; i++)
        {
            if(st[i]=='(')
            {
                s.push(0);
            }
            else
            {
                ll var=s.top();
                s.pop();
                ll tempr=var*(var+1);
                tempr=tempr/2;
                ans=ans+tempr;
                var=s.top();
                var++;
                s.pop();
                s.push(var);
            }
        }
        int var=s.top();
        s.pop();
        ll tempr=var*(var+1);
        tempr=tempr/2;
        ans=ans+tempr;
        cout<<ans<<endl;
    }
}
