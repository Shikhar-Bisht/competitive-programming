#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long c,sum,n,diff,ans;
        cin>>c>>sum;
        n=sum/c;
        if(n==0)
        {
            cout<<sum<<endl;
        }
        else
        {
            diff=sum-n*c;
            ans=(n+1)*(n+1)*diff+n*n*(c-diff);
            cout<<ans<<endl;
        }
    }
}
