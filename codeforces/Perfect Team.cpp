#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int c,m,x,minm,extr,ans;
        cin>>c>>m>>x;
        minm=min(x,min(c,m));
        c=c-minm;
        x=x-minm;
        m=m-minm;
        //cout<<minm;
        ans=minm;
        if(c>0&&m>0)
        {
            minm=min(c,m);
            //cout<<minm;
            if(c==minm)
            {
                extr=m-minm;
                m=m-extr;
            }
            else
            {
                extr=c-minm;
                c=c-extr;
            }
            minm=min(extr,minm);
            //cout<<minm;
            ans=ans+minm;
            c=c-minm;
            m=m-minm;
            int var=c+m;
            int temp=var/3;
            ans=ans+temp;
        }
        cout<<ans<<endl;
    }
}
