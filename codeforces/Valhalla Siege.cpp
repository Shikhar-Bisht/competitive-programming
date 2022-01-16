#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,q,sum=0,i;
    cin>>n>>q;
    vector<ll> v;
    for(i=0;i<n;i++)
    {
        ll temp;
        cin>>temp;
        sum=sum+temp;
        v.push_back(sum);
    }
    ll c=0;
    ll arr[q];
    for(i=0;i<q;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<q;i++)
    {
        c=c+arr[i];
        vector<ll>::iterator it;
        it=lower_bound(v.begin(),v.end(),c);
        ll var=it-v.begin();
        //cout<<var<<endl;
        if(var==n)
        {
            cout<<n<<endl;
            c=0;
        }
        else
        {
            if(v[var]==c)
            {
                ll temp=n-var-1;
                if(temp==0)
                {
                    c=0;
                    cout<<n<<endl;
                }
                else
                {
                    cout<<temp<<endl;
                }
            }
            else
            {
                cout<<n-var<<endl;
            }
        }
    }
}
