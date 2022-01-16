#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll c=0,pvp,pvh,i,pvf,temp;
    for(i=0; i<n; i++)
    {
        ll x,h;
        cin>>x>>h;
        if(i==0)
        {
            c=c+1;
            pvp=x;
            pvh=h;
            pvf=1;
            continue;
        }
        if(i==n-1)
        {
            if(pvf==0)
            {
                temp=pvp+pvh;
                if(temp<x)
                {
                    c=c+1;
                }
            }
            c=c+1;
            continue;
        }
        if(pvf==1)
        {
            temp=pvp+h;
            if(temp<x)
            {
                pvf=1;
                c++;
            }
            else
            {
                pvf=0;
            }
        }
        else
        {
            ll temp1=pvp+pvh+h;
            ll temp2=pvp+pvh;
            ll temp3=pvp+h;
            if(temp1<x)
            {
                c=c+2;
                pvf=1;
            }
            else if(temp2<x)
            {
                c=c+1;
                pvf=0;
            }
            else if(temp3<x)
            {
                c=c+1;
                pvf=1;
            }
            else
            {
                pvf=0;
            }
        }
        pvp=x;
        pvh=h;
    }
    cout<<c;
}
