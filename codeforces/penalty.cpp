#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int c1=0,c2=0,r1=0,r2=0,m1=5,m2=5,flag=0,i;
        string s;
        cin>>s;
        for(i=0; i<10; i++)
        {
            if(i%2==0)
            {
                if(s[i]=='1')
                {
                    c1++;
                }
                else if(s[i]=='?')
                {
                    r1++;
                }
                m1--;
            }
            else
            {
                if(s[i]=='1')
                {
                    c2++;
                }
                else if(s[i]=='?')
                {
                    r2++;
                }
                m2--;
            }
            if(c1+m1<c2+r2)
            {
                flag=1;
                break;
            }
            else if(c2+m2<c1+r1)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<10<<endl;
        }
        else
        {
            cout<<i+1<<endl;
        }
    }
}
