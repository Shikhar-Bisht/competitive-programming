#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll l,k,i,j=0;
        cin>>l>>k;
        char s[l];
        int flag=0;
        for(i=0; i<l; i++)
        {
            cin>>s[i];
            if(flag==0)
            {
                if(s[i]=='0')
                {
                    ll var=i-j;
                    if(k>=var)
                    {
                        k=k-var;
                        swap(s[i],s[j]);
                        j++;
                    }
                    else
                    {
                        ll temp=i-k;
                        swap(s[i],s[temp]);
                        flag=1;
                    }
                }
            }
        }
        for(i=0;i<l;i++)
        {
            cout<<s[i];
        }
        cout<<endl;
    }
}
