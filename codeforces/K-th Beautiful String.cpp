#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k,i=1,pos1,pos2;
        cin>>n>>k;
        ll temp=2*k,var=i*(i+1);
        while(var<temp)
        {
            i++;
            var=i*(i+1);
        }
        pos1=n-i;
        var=i*(i+1);
        var=var/2;
        var=var-k;
        pos2=pos1+var+1;
        for(i=1; i<=n; i++)
        {
            if(i==pos1||i==pos2)
            {
                cout<<'b';
            }
            else
            {
                cout<<'a';
            }
        }
        cout<<endl;
    }
}
