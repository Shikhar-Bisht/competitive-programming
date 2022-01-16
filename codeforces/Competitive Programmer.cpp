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
        int flag1=0,flag2=0,sum=0,l,i,z=0;
        l=s.length();
        for(i=0; i<l; i++)
        {
            if(s[i]=='0')
            {
                z++;
                flag1=1;
            }
            if(s[i]=='0')
            {
                continue;
            }
            if(flag2==0)
            {
                if((s[i]-'0')%2==0)
                {
                    flag2=1;
                }
            }
            sum=sum+s[i]-'0';
        }
        if(flag1==1&&flag2==1&&sum%3==0||z>=2&&sum%3==0)
        {
            cout<<"red"<<endl;
        }
        else
        {
            cout<<"cyan"<<endl;
        }
    }
}
