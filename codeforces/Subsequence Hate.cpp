#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int l=s.length(),i,n1=0,n0=0,mini=-1;
        for(i=0;i<l;i++)
        {
            if(s[i]=='0')
            {
                n0++;
            }
            else
            {
                n1++;
            }
        }
        int nc1=0,nc0=0,c0=0,c1=0;
        for(i=0;i<l;i++)
        {
            if(s[i]=='0')
            {
                c0++;
            }
            else
            {
                c1++;
            }
            int nc0=n0-c0,nc1=n1-c1;
            int temp1=c0+nc1,temp2=c1+nc0;
            int var=min(temp1,temp2);
            if(mini==-1)
            {
                mini=var;
            }
            else
            {
                if(var<mini)
                {
                    mini=var;
                }
            }
        }
        cout<<mini<<endl;
    }
}
