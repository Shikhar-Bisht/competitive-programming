#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    char arr[3]= {'a','b','c'},first,last;
    while(t--)
    {
        string s;
        cin>>s;
        int l=s.length(),i,flag=0;
        for(i=0; i<l; i++)
        {
            if(s[i]=='?'||i==l-1)
            {
                continue;
            }
            else
            {
                if(s[i]==s[i+1])
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
        {
            cout<<-1<<endl;
        }
        else
        {
            for(i=0; i<l; i++)
            {
                if(s[i]=='?')
                {
                    int temp=i;
                    while(s[temp]=='?'&&temp<l)
                    {
                        temp++;
                    }
                    if(temp==l)
                    {
                        last='a';
                    }
                    else
                    {
                        last=s[temp];
                    }
                    while(s[i]=='?'&&i<l)
                    {
                        if(i==0)
                        {
                            first='a';
                        }
                        else
                        {
                            first=s[i-1];
                        }
                        for(int j=0; j<3; j++)
                        {
                            if(arr[j]!=first&&arr[j]!=last)
                            {
                                s[i]=arr[j];
                            }
                        }
                        i++;
                    }
                    i--;
                }
            }
            cout<<s<<endl;
        }
    }
    return 0;
}
