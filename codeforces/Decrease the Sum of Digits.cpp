#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string gn,s;
        ll sum,gs=0,i;
        cin>>gn>>sum;
        s=gn;
        ll l=s.length();
        for(i=0;i<l;i++)
        {
            gs=gs+(s[i]-'0');
        }
        if(gs<=sum)
        {
            cout<<0<<endl;
        }
        else
        {
            ll fa=0;
            for(i=l-1;i>=0;i--)
            {
               gs=gs-(s[i]-'0');
               s[i]='0';
               if(i>0)
               {
                   if(s[i-1]==9)
                   {
                       i--;
                       while(i>=0&&s[i]==9)
                       {
                           gs=gs-s[i];
                           s[i]='0';
                           i--;
                       }
                   }
               }
               if(gs+1<=sum)
               {
                   break;
               }
            }
            if(i==0)
            {
                    fa=pow(10,l);
            }
            else
            {
                s[i-1]++;
                for(i=0;i<l;i++)
                {
                    fa=fa*10+(s[i]-'0');
                }
            }
            ll nw=0;
            for(i=0;i<l;i++)
            {
                nw=nw*10+(gn[i]-'0');
            }
            ll ans=fa-nw;
            cout<<ans<<endl;
        }
    }
}
