#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m,maxi=0,mini=0,temp,var;
    cin>>n>>m;
    var=n-(m-1);
    if(var%2==0)
    {
        temp=var/2;
        maxi=temp*(var-1);
    }
    else
    {
        temp=var/2;
        maxi=temp*var;
    }
    var=n/m;
    if(n%m==0)
    {
        if(var%2==0)
        {
            temp=var/2;
            ll temp1=temp*(var-1);
            mini=m*temp1;
        }
        else
        {
            temp=var/2;
            ll temp1=temp*var;
            mini=m*temp1;
        }
    }
    else
    {
        ll variable=n%m;
        m=m-variable;
        ll variable2=m*var;
        ll variable1=n-variable2;
        if(var%2==0)
        {
            temp=var/2;
            ll temp1=temp*(var-1);
            mini=m*temp1;
        }
        else
        {
            temp=var/2;
            ll temp1=temp*var;
            mini=m*temp1;
        }
        n=variable1;
        m=variable;
        var=n/m;
        if(var%2==0)
        {
            temp=var/2;
            ll temp1=temp*(var-1);
            ll temp3=m*temp1;
            mini=mini+temp3;
        }
        else
        {
            temp=var/2;
            ll temp1=temp*var;
            ll temp3=m*temp1;
            mini=mini+temp3;
        }
    }
    cout<<mini<<" "<<maxi;
}
