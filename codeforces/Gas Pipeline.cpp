#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll l,a,b,i,fl=0,pip=0,pil=0;
        cin>>l>>a>>b;
        pip=l;
        pil=l+1;
        string s;
        cin>>s;
        for(i=0;i<l;i++)
        {
            if(s[i]=='1')
            {
                if(fl==0)
                {
                    pip++;
                }
                while(i<l)
                {
                    if(s[i]=='0'&&s[i-1]=='0')
                    {
                        break;
                    }
                    pil++;
                    i++;
                }
                ll c=0;
                while(i<l&&s[i]=='0')
                {
                    c++;
                    i++;
                }
                if(i<l)
                {
                    ll temp1=c*b,temp2=2*a;
                    if(temp1>temp2)
                    {
                        pip++;
                        fl=0;
                    }
                    else
                    {
                        pil=pil+c;
                        fl=1;
                    }
                }
                else
                {
                    pip++;
                }
                i--;
            }
        }
        ll temp1=pip*a,temp2=pil*b,ans;
        ans=temp1+temp2;
        cout<<ans<<endl;
    }
}
