#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,flag=0,i,temp,var,check;
        cin>>n;
        temp=sqrt(n);
        for(i=2;i<=temp;i++)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }
        check=i*i;
        if(flag==0||check==n)
        {
            cout<<"NO"<<endl;
            continue;
        }
        flag=0;
        var=i;
        n=n/i;
        ll temp1=n/var;
        temp=sqrt(n);
        //cout<<var<<" "<<n<<" "<<temp1<<" "<<temp<<endl;
        for(i=2;i<=temp;i++)
        {
            if(i==var||i==temp1)
            {
                continue;
            }
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }
        check=i*i;
        //cout<<i<<" "<<flag<<endl;
        if(flag==0||check==n)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            ll var1=n/i;
            cout<<var<<" "<<i<<" "<<var1<<endl;
        }
    }
}
