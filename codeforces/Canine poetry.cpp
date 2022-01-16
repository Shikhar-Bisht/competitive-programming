#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int l=s.length(),i,ans=0;
        char var='a';
        for(i=0;i<l-2;i++)
        {
            char temp=s[i];
            if(s[i]==s[i+1])
            {
                if(s[i]==var)
                {
                    var++;
                    if(var>'z')
                    {
                        var='a';
                    }
                    s[i+1]=var;
                }
                else
                {
                    s[i+1]=var;
                }
                ans++;
                var++;
                if(var>'z')
                {
                    var='a';
                }
            }
            if(s[i]==s[i+2])
            {
                if(s[i]==var)
                {
                    var++;
                    if(var>'z')
                    {
                        var='a';
                    }
                    s[i+2]=var;
                }
                else
                {
                    s[i+2]=var;
                }
                ans++;
                var++;
                if(var>'z')
                {
                    var='a';
                }
            }
        }
        cout<<s<<endl;
        cout<<ans<<endl;
    }
}
