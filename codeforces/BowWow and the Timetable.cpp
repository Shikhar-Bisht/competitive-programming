#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l=0,ans=0,i;
    string s;
    cin>>s;
    l=s.length();
    if(l==1)
    {
        if(s[0]=='0')
        {
            cout<<0;
            return 0;
        }
    }
    ans=(l-1)/2;
    if((l-1)%2==0)
    {
        ans=ans-1;
        for(i=1;i<l;i++)
        {
            if(s[i]=='1')
            {
                ans++;
                break;
            }
        }
    }
    ans=ans+1;
    cout<<ans;
    return 0;
}
