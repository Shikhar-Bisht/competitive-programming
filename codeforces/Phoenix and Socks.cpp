#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,l,r,i,ans=0;
        cin>>n>>l>>r;
        map<int,int> ml,mr;
        map<int,int>::iterator it;
        for(i=0; i<l; i++)
        {
            int temp;
            cin>>temp;
            ml[temp]++;
        }
        for(i=0; i<r; i++)
        {
            int temp;
            cin>>temp;
            mr[temp]++;
        }
        for(it=ml.begin(); it!=ml.end(); it++)
        {
            int temp=it->first;
            if(mr[temp]>0)
            {
                int var=min(ml[temp],mr[temp]);
                ml[temp]=ml[temp]-var;
                mr[temp]=mr[temp]-var;
                l=l-var;
                r=r-var;
            }
        }
        if(l>=r)
        {
            int sal=0;
            ans=ans+r;
            l=l-r;
            for(it=ml.begin(); it!=ml.end(); it++)
            {
                int temp=it->second;
                if(temp%2==0)
                {
                    sal=sal+temp;
                }
                else
                {
                    sal=sal+temp-1;
                }
                if(sal>=l)
                {
                    break;
                }
            }
            sal=min(l,sal);
            ans=ans+sal/2;
            l=l-sal;
            ans=ans+l;
        }
        else
        {
            int sar=0;
            //cout<<l<<" "<<r<<endl;
            ans=ans+l;
            //cout<<ans<<endl;
            r=r-l;
            for(it=mr.begin();it!=mr.end(); it++)
            {
                int temp=it->second;
                if(temp%2==0)
                {
                    sar=sar+temp;
                }
                else
                {
                    sar=sar+temp-1;
                }
                if(sar>=r)
                {
                    break;
                }
            }
            sar=min(r,sar);
            ans=ans+sar/2;
            r=r-sar;
            ans=ans+r;
        }
        /*int var=min(l,r);
        ans=ans+var;
        l=l-var;
        r=r-var;
        int rm=r+l;
        var=min(sa,rm);
        //cout<<var<<endl;
        int tempr=var/2;
        ans=ans+tempr;
        rm=rm-var;
        //cout<<rm<<endl;
        ans=ans+rm;*/
        cout<<ans<<endl;
    }
}
