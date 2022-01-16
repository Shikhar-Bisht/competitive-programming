#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    int p1=0,p2=0,nq=0,i;
    double ans=0;
    cin>>s1>>s2;
    int l=s1.length();
    for(i=0;i<l;i++)
    {
        if(s1[i]=='+')
        {
            p1++;
        }
        else
        {
            p1--;
        }
    }
    for(i=0;i<l;i++)
    {
        if(s2[i]=='+')
        {
            p2++;
        }
        else if(s2[i]=='-')
        {
            p2--;
        }
        else
        {
            nq++;
        }
    }
    int diff=abs(p1-p2);
    if(diff>nq)
    {
        cout<<fixed<<setprecision(10)<<ans;
    }
    else
    {
        int var1,var2;
        var1=nq-diff;
        if(var1%2!=0)
        {
        cout<<fixed<<setprecision(10)<<ans;
        }
        else
        {
            double temp=var1/2;
            diff=diff+temp;
            //diff++;
            double i;
            var1=1,var2=1;
            int var3=1;
            double total=pow(2,nq),possible;
            for(i=1;i<=nq;i++)
            {
                var1=var1*i;
            }
            for(i=1;i<=temp;i++)
            {
                var2=var2*i;
            }
            for(i=1;i<=diff;i++)
            {
                var3=var3*i;
            }
            var2=var2*var3;
            possible=var1/var2;
            ans=possible/total;
            cout<<fixed<<setprecision(10)<<ans;
        }
    }
}
