#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,d,ans;
        cin>>a>>b>>d;
        if(d>=a)
        {
            ans=d*(b/d+1);
        }
        else
        {
            ans=d;
        }
        cout<<ans<<endl;
    }
    return 0;
}
