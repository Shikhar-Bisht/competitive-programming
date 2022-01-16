#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i;
        cin>>n>>k;
        if(n<=k)
        {
            cout<<1<<endl;
            continue;
        }
        int temp=sqrt(n);
        int m=min(k,temp);
        //cout<<m<<endl;
        int ans=n;
        for(i=2;i<=m;i++)
        {
            if(n%i==0)
            {
                if(n/i<=k)
                {
                    ans=i;
                    break;
                }
                ans=n/i;
            }
        }
        cout<<ans<<endl;
    }
}
