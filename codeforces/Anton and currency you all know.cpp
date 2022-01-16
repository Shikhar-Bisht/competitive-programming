#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.length(),i,ex=-1;
    char temp=s[l-1];
    for(i=0; i<l-1; i++)
    {
        int var=s[i]-'0';
        if(var%2==0)
        {
            if(s[i]<temp)
            {
                ex=i;
                break;
            }
        }
    }
    if(ex==-1)
    {
        for(i=l-2; i>=0; i--)
        {
            int var=s[i]-'0';
            if(var%2==0)
            {
                ex=i;
                break;
            }
        }
    }
    if(ex==-1)
    {
        cout<<-1<<endl;
    }
    else
    {
        for(i=0;i<l-1;i++)
        {
            if(i==ex)
            {
                cout<<temp;
                continue;
            }
            cout<<s[i];
        }
        cout<<s[ex];
    }
}
