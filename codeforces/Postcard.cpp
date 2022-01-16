#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int k;
    cin>>s;
    cin>>k;
    int i,l=s.length(),sl=0,flag1=0;
    for(i=0; i<l; i++)
    {
        if(s[i]=='*')
            flag1=1;
        if(s[i]=='?'||s[i]=='*')
            continue;
        sl++;
    }
    if(k>sl)
    {
        if(flag1==0)
        {
            cout<<"Impossible";
        }
        else
        {
            int var=k-sl,flag=0;
            for(i=0; i<l-1; i++)
            {
                if(s[i]=='?'||s[i]=='*')
                {
                    continue;
                }
                if(flag==0)
                {
                    if(s[i+1]=='*')
                    {
                        for(int j=0; j<var; j++)
                        {
                            cout<<s[i];
                        }
                        flag=1;
                    }
                }
                cout<<s[i];
            }
            if(s[l-1]!='?'&&s[l-1]!='*')
            {
                cout<<s[l-1];
            }
        }
    }
    else if(k==sl)
    {
        for(i=0; i<l; i++)
        {
            if(s[i]=='?'||s[i]=='*')
            {
                continue;
            }
            cout<<s[i];
        }
    }
    else
    {
        int temp=l-sl;
        temp=sl-temp;
        if(temp>k)
        {
            cout<<"Impossible";
        }
        else
        {
            int var=sl-k;
            for(i=0; i<l-1; i++)
            {
                if(s[i]=='?'||s[i]=='*')
                {
                    continue;
                }
                if(var>0)
                {
                    if(s[i+1]=='?'||s[i+1]=='*')
                    {
                        var--;
                        continue;
                    }
                }
                cout<<s[i];
            }
            if(s[l-1]!='?'&&s[l-1]!='*')
            {
                cout<<s[l-1];
            }
        }
    }

}
