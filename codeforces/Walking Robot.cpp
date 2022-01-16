#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,b,a,i,bv,av;
    cin>>n>>b>>a;
    bv=b;
    av=a;
    int s[n];
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(i=0;i<n;i++)
    {
        if(s[i]==1)
        {
            if(av<a)
            {
                if(bv>0)
                {
                    bv--;
                    av++;
                }
                else if(av>0)
                {
                    av--;
                }
                else
                {
                    break;
                }
            }
            else
            {
                av--;
            }
        }
        else
        {
            if(av>0)
            {
                av--;
            }
            else if(bv>0)
            {
                bv--;
            }
            else
            {
                break;
            }
        }
    }
    cout<<i;
}
