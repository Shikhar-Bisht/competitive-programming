#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,c=0;
    cin>>n;
    while(n>0)
    {
        c++;
        ll var=1;
        while(var<=n)
        {
            var=var*2;
        }
        var=var/2;
        n=n-var;
    }
    cout<<c;
}
