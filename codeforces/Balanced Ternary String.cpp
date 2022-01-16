#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int pc=n/3;
    vector<int> ct(3),al(3);
    char s[n];
    for(i=0; i<n; i++)
    {
        cin>>s[i];
        int temp=s[i]-'0';
        ct[temp]++;
    }
    queue<int> qu;
    for(i=0; i<3; i++)
    {
        if(ct[i]<pc)
        {
            //cout<<i<<endl;
            qu.push(i);
        }
    }
    for(i=0; i<n; i++)
    {
        if(qu.empty()==true)
        {
            break;
        }
        int var=s[i]-'0';
        if(al[var]==pc)
        {
            int t=qu.front();
            //cout<<t<<endl;
            char c='0'+t;
            s[i]=c;
            ct[t]++;
            al[t]++;
            if(ct[t]==pc)
            {
                qu.pop();
            }
        }
        else
        {
            if(ct[var]>pc)
            {
                int t=qu.front();
                if(t<var)
                {
                    char c='0'+t;
                    s[i]=c;
                    ct[t]++;
                    ct[var]--;
                    al[t]++;
                    if(ct[t]==pc)
                    {
                        qu.pop();
                    }
                }
                else
                {
                    al[var]++;
                }
            }
        }
    }
    for(i=0; i<n; i++)
    {
        cout<<s[i];
    }
}
