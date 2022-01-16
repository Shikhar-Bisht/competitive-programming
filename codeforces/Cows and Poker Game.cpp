#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int l,i;
    cin>>l;
    string s;
    cin>>s;
    map <char,int> m;
    for(i=0;i<l;i++)
        m[s[i]]++;
    if(m['I']>1)
    {
        cout<<0;
    }
    else if(m['I']==1)
    {
        cout<<1;
    }
    else
    {
        int c=0;
        for(i=0;i<l;i++)
        {
            if(s[i]=='A')
            {
                c++;
            }
        }
        cout<<c;
    }
}
