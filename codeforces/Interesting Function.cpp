#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long l,r,ans=0;
        cin>>l>>r;
        while(r>0)
        {--
            ans=ans+r-l;
            l=l/10;
            r=r/10;
        }
        cout<<ans<<endl;
    }
}
