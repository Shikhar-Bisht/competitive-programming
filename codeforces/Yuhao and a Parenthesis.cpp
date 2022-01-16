#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,ans=0;
    map<int,int> m;
    map<int,int>::iterator it;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        int l=s.length(),nl=0,pl=0;
        for(i=0;i<l;i++)
        {
            if(s[i]=='(')
            {
                pl++;
            }
            if(s[i]==')')
            {
                if(pl==0)
                {
                    nl--;
                }
                else
                {
                    pl--;
                }
            }
        }
        //cout<<s<<" "<<pl<<" "<<nl<<endl;
        if(nl==0)
        {
            m[pl]++;
        }
        else if(pl==0)
        {
            m[nl]++;
        }
    }
    for(it=m.begin();it!=m.end();it++)
    {
        int var=it->first;
        //cout<<var<<" "<<m[var]<<endl;
        if(var==0)
        {
            int temp=it->second;
            ans=ans+temp/2;
        }
        else if(var>0)
        {
            int tvar=var*-1;
            int temp1=m[var],temp2=m[tvar];
            ans=ans+min(temp1,temp2);
        }
    }
    cout<<ans;
}
