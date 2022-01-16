#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,c1,c2,i,j,flag=0;
        cin>>l;
        string s1,s2;
        cin>>s1>>s2;
        for(i=l-1; i>=0; i--)
        {
            if(s1[i]!=s2[i])
            {
                c1=0;
                c2=0;
                for(j=0; j<=i; j++)
                {
                    if(s1[j]=='1')
                    {
                        c1++;
                    }
                    else
                    {
                        c2++;
                    }
                }
                if(c1==c2)
                {
                    for(j=0;j<=i;j++)
                    {
                        if(s1[j]=='0')
                            s1[j]='1';
                        else
                            s1[j]='0';
                    }
                }
                else
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
