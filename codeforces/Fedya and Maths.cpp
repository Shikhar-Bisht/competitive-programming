#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.length();
    //cout<<l;
    if(l==1)
    {
        int temp=s[0]-'0';
        if(temp%4==0)
        {
            cout<<4;
        }
        else
        {
            cout<<0;
        }
    }
    else
    {
        int temp=(s[l-1]-'0')+((s[l-2]-'0')*10);
        if(temp%4==0)
        {
            cout<<4;
        }
        else
        {
            cout<<0;
        }
    }
}
