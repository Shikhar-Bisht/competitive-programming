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
    ll n,i,sum=0,ans=0;
    vector<ll> v;
    priority_queue<ll,vector<ll>,greater<ll>> pq;
    cin>>n;
    for(i=0; i<n; i++)
    {
        ll temp;
        cin>>temp;
        if(temp>=0)
        {
            sum=sum+temp;
            ans++;
        }
        else
        {
            ll var=sum+temp;
            if(var>=0)
            {
                sum=var;
                pq.push(temp);
                ans++;
            }
            else
            {
                if(pq.empty()==false)
                {
                    ll vari=pq.top();
                    if(temp>vari)
                    {
                        pq.pop();
                        pq.push(temp);
                        sum=sum-vari;
                        sum=sum+temp;
                    }
                }
            }
        }
        //cout<<sum<<endl;
    }
    cout<<ans;
}
