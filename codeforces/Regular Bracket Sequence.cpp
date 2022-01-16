#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i,l;
    l=s.length();
    int c=0,maxl=0,var=0;
    for(i=0;i<l;i++)
    {
        if(s[i]=='(')
        {
            c++;
        }
        else
        {
            c--;
            if(c<0)
            {
                c=0;
                continue;
            }
            maxl=maxl+2;
        }
    }
    cout<<maxl;
}
