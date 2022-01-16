#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int s,i,e,ans=0;
        cin>>s>>i>>e;
        if(i>s)
        {
            int var=i-s;
            if(var>=e)
            {
                ans=0;
            }
            else
            {
                e=e-var;
                e++;
                ans=e/2;
            }
        }
        else if(s>i)
        {
            int var=s-i;
            if(var>e)
            {
                ans=e+1;
            }
            else if(var==e)
            {
                ans=e;
            }
            else
            {
                ans=var;
                e=e-var;
                e++;
                e=e/2;
                ans=ans+e;
            }
        }
        else
        {
            e++;
            ans=e/2;
        }
        cout<<ans<<endl;
    }
}
