#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        long long ans=0,var=0,c=0,vari,sub=0;
        int l=s.length(),i;
        for(i=0; i<l; i++)
        {
            if(i%2==0)
            {
                if(s[i]=='0'||s[i]=='?')
                {
                    c++;
                }
                else
                {
                    //cout<<i<<" ";
                    if(c>0)
                    {
                        vari=c*(c-1);
                        vari=vari/2;
                        var=var+vari;
                    }
                    c=0;
                }
            }
            else
            {
                if(s[i]=='1'||s[i]=='?')
                {
                    c++;
                }
                else
                {
                    //cout<<i<<" ";
                    if(c>0)
                    {
                        vari=c*(c-1);
                        vari=vari/2;
                        var=var+vari;
                    }
                    c=0;
                }
            }
        }
        //cout<<endl;
        if(c>0)
        {
            vari=c*(c-1);
            vari=vari/2;
            var=var+vari;
        }
        c=0;
        vari=0;
        for(i=0; i<l; i++)
        {
            if(i%2==1)
            {
                if(s[i]=='0'||s[i]=='?')
                {
                    //cout<<i<<" "<<c<<endl;
                    c++;
                }
                else
                {
                    //cout<<i<<" ";
                    if(c>0)
                    {
                        vari=c*(c-1);
                        vari=vari/2;
                        ans=ans+vari;
                    }
                    c=0;
                }
            }
            else
            {
                if(s[i]=='1'||s[i]=='?')
                {
                    //cout<<i<<" "<<endl;
                    c++;
                }
                else
                {
                    //cout<<i<<" ";
                    if(c>0)
                    {
                        vari=c*(c-1);
                        vari=vari/2;
                        ans=ans+vari;
                    }
                    c=0;
                }
            }
        }
        if(c>0)
        {
            vari=c*(c-1);
            vari=vari/2;
            ans=ans+vari;
        }
        //cout<<ans<<endl;
        c=0;
        for(i=0;i<l;i++)
        {
            if(s[i]=='?')
            {
                c++;
            }
            else
            {
                if(c>0)
                {
                    vari=c*(c-1);
                    vari=vari/2;
                    sub=sub+vari;
                }
                c=0;
            }
        }
        if(c>0)
        {
            vari=c*(c-1);
            vari=vari/2;
            sub=sub+vari;
        }
        //cout<<var<<" "<<ans<<" "<<sub<<endl;
        ans=ans+var-sub;
        ans=ans+l;
        cout<<ans<<endl;
    }
}
