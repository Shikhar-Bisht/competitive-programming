#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,g=0,i,c=0,m=0;
    cin>>l;
    char s[l];
    for(i=0;i<l;i++)
    {
        cin>>s[i];
        if(s[i]=='G')
            g++;
    }
    //cout<<g;
    for(i=0;i<l;i++)
    {
        if(s[i]=='G')
        {
            int var=i,prev=i;
            c=0;
            while(s[var]=='G')
            {
                var++;
                c++;
                if(var==l)
                {

                    break;
                }
            }
            prev=var;
            if(var<l-1&&s[var+1]=='G')
            {
                var++;
                while(s[var]=='G')
                {
                    var++;
                    c++;
                    if(var==l)
                    {
                        break;
                    }
                }
            }
            if(c<g)
            {
                c=c+1;
                if(m<c)
                {
                    m=c;
                }
            }
            else
            {
               m=c;
               break;
            }
            i=prev;
        }
    }
    cout<<m;
}
