#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool checkprime(long long temp)
{
    long long var=sqrt(temp),i;
    for(i=2; i<=var; i++)
    {
        if(temp%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int t,tn;
    cin>>t;
    for(tn=1; tn<=t; tn++)
    {
        ll n,i;
        cin>>n;
        cout<<"Case "<<tn<<": ";
        if(n<12)
        {
            cout<<"IMPOSSIBLE"<<endl;
        }
        else
        {
            cout<<2<<" "<<2<<" "<<2<<" "<<2<<" ";
            n=n-8;
            for(i=2; i<=n/2; i++)
            {
                long long var=n-i;
                if(checkprime(i) && checkprime(var))
                {
                    cout<<i<<" "<<var<<endl;
                    break;
                }
            }
        }
    }
}
