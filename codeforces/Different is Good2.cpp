#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<char> v;
    int l,i,j;
    string s;
    cin>>l>>s;
    for(i=0; i<l; i++)
    {
        int flag=0;
        for(j=0; j<v.size(); j++)
        {
            if(v[j]==s[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            continue;
        }
        v.push_back(s[i]);
    }
    int c = 26-v.size();
    int var=0;
    for(i=0;i<l-1;i++)
    {
        if(s[i]=='0')
        {
            continue;
        }
        for(j=i+1;j<l;j++)
        {
            if(s[i]==s[j])
            {
              var++;
              s[j]='0';
            }
        }
    }
    if(var>c)
    {
        cout<<-1;
    }
    else
    {
        cout<<var;
    }
    return 0;
}
