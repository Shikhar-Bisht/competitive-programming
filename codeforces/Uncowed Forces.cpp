#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m[5],w[5],i,ans=0,wr,ri;
    for(i=0;i<5;i++)
    {
        cin>>m[i];
    }
    for(i=0;i<5;i++)
    {
        cin>>w[i];
    }
    cin>>ri>>wr;
    for(i=0;i<5;i++)
    {
        int var=250-m[i];
        int var1=500*(i+1);
        var=(var*(var1/250))-50*w[i];
        int var2=3*50*(i+1);
        ans=ans+max(var2,var);
    }
    ans=ans+100*ri-50*wr;
    cout<<ans;
}
