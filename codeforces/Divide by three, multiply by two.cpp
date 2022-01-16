#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,i,var;
    cin>>n;
    ll arr[n];
    map<ll,int> m;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        m[arr[i]]++;
    }
    for(i=0;i<n;i++)
    {
        ll flag=0;
        ll temp;
        if(arr[i]%2==0)
        {
            temp=arr[i]/2;
            if(m[temp]>0)
            {
                flag=1;
            }
        }
        temp=arr[i]*3;
        if(m[temp]>0)
        {
            flag=1;
        }
        if(flag==0)
        {
            var=arr[i];
            break;
        }
    }
    cout<<var<<" ";
    //m[var]--;
    for(i=1;i<n;i++)
    {
        ll temp;
        if(var%3==0)
        {
            temp=var/3;
            if(m[temp]>0)
            {
                cout<<temp<<" ";
                var=temp;
                //m[temp]--;
                continue;
            }
        }
        temp=var*2;
        if(m[temp]>0)
        {
            cout<<temp<<" ";
            var=temp;
        }
    }
}
