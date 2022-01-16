#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,x,y,ans;
        cin>>a>>b>>x>>y;
        if(a==b)
        {
            ans=a+b-2;
            cout<<ans<<endl;
        }
        else
        {
            ans=(a+b)/2;
            cout<<ans<<endl;
        }
    }
    return 0;
}
