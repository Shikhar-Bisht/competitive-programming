#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long b,d,s,ans=0;
    cin>>b>>d>>s;
    long long ma=max(b,d);
    ma=max(ma,s);
    ma--;
    if(b<ma)
    {
        ans=ans+(ma-b);
    }
    if(d<ma)
    {
        ans=ans+(ma-d);
    }
    if(s<ma)
    {
        ans=ans+(ma-s);
    }
    cout<<ans;
}
