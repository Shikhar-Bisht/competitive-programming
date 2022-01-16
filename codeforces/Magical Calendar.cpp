#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,r;
        cin>>n>>r;
        long long ans=0;
        if(n<=r)
        {
            n=n-1;
            ans=((n+1)*n)/2;
            cout<<ans+1<<endl;
        }
        else
        {
            ans=((r+1)*r)/2;
            cout<<ans<<endl;
        }
    }
}
