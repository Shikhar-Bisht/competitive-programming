#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,ans=0,i;
        cin>>a>>b;
        string s;
        cin>>s;
        int l=s.length();
        for(i=0;i<l;i++)
        {
            if(s[i]=='1')
            {
                int c=0;
                while(i<l&&s[i]=='1')
                {
                    i++;
                }
                if(i==l)
                {
                    ans=ans+a;
                    break;
                }
                while(i<l&&s[i]=='0')
                {
                    i++;
                    c++;
                }
                if(i==l)
                {
                    ans=ans+a;
                    break;
                }
                c=c*b;
                i--;
                ans=ans+min(c,a);
                //cout<<ans<<endl;
            }
        }
        cout<<ans<<endl;
    }
}
