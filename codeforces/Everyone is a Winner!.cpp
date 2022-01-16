#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> v;
        v.push_back(n);
        ll i=1,c;
        while(true)
        {
            ll var=i+1;
            ll temp=n/var;
            if(v[i-1]==temp)
            {
                c=temp;
                break;
            }
            v.push_back(temp);
            i++;
        }
        cout<<c+v.size()<<endl;
        for(i=0;i<c;i++)
        {
            cout<<i<<" ";
        }
        for(i=v.size()-1;i>=0;i--)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}
