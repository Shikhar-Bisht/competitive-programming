#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,maxc,minc,maxp,minp,m,ans;
    cin>>n;
    for(i=0; i<n; i++)
    {
        int temp1,temp2;
        cin>>temp1>>temp2;
        if(i==0)
        {
            maxc=temp1;
            minc=temp2;
        }
        else
        {
            if(temp1>maxc)
            {
                maxc=temp1;
            }
            if(temp2<minc)
            {
                minc=temp2;
            }
        }
    }
    cin>>m;
    for(i=0; i<m; i++)
    {
        int temp1,temp2;
        cin>>temp1>>temp2;
        if(i==0)
        {
            maxp=temp1;
            minp=temp2;
        }
        else
        {
            if(temp1>maxp)
            {
                maxp=temp1;
            }
            if(temp2<minp)
            {
                minp=temp2;
            }
        }
    }
    //cout<<maxc<<" "<<minc<<" "<<maxp<<" "<<minp;
    int var1=maxc-minp;
    int var2=maxp-minc;
    ans=max(var1,var2);
    if(ans<=0)
    {
        cout<<0;
    }
    else
    {
        cout<<ans;
    }
}
