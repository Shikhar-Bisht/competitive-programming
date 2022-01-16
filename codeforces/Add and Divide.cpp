#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int sol(ll a,ll b)
{
    int c=0,m=0;
    if(b==1)
    {
        b++;
        c++;
    }
    while(1)
    {
        int n=0;
        while(1)
        {
            ll temp;
            temp = pow(b,n);
            if(a/temp==0)
                break;
            n++;
        }
        //cout<<b<<" "<<n<<endl;
        if(m!=0)
        {
            if(m+c-1<n+c)
            {
                //cout<<m<<" "<<" "<<n<<" "<<c<<endl;
                //cout<<m+c-1<<" "<<n+c<<endl;
                break;
            }
            c++;
            b++;
            m=n;
        }
        else
        {
            m=n;
            b++;
            c++;
        }
    }
    //cout<<b<<endl;
    return m+c-1;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        int c;
        cin>>a>>b;
        c=sol(a,b);
        cout<<c<<endl;
    }
    return 0;
}
