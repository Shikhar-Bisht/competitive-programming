#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int i,m,var2=0,var=0;
        for(i=0;i<k;i++)
        {
            cin>>var;
            if(i==0)
            {
                m=var;
            }
            else
            {
                if(m<((var-var2)/2)+1)
                {
                    m=((var-var2)/2)+1;
                }
            }
            var2=var;
        }
        if(m<(n-var+1))
        {
            m=n-var+1;
        }
        cout<<m<<endl;
    }
}

