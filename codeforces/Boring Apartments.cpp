#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ans=0,var=0,mul,var1=0;
        cin>>n;
        int temp=n;
        while(temp>0)
        {
            mul=temp%10;
            temp=temp/10;
        }
        ans=ans+((mul-1)*10);
        //cout<<ans<<endl;
        while(n>0)
        {
            var++;
            if(n%10==mul)
            {
                if(var1==var-1)
                {
                    var1=var;
                }
                else
                {
                    var1=var-1;
                }
            }
            else if(n%10>mul)
            {
                var1=var;
            }
            n=n/10;
        }
        for(int i=1;i<=var1;i++)
        {
            ans=ans+i;
        }
        cout<<ans<<endl;
    }
}
