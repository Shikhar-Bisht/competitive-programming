#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int l=s.length(),i,cur=0;
        long long ans=0;
        for(i=0;i<l;i++)
        {
            if(s[i]=='+')
            {
                cur++;
            }
            else
            {
                cur--;
            }
            if(cur<0)
            {
                ans=ans+i+1;
                cur=0;
            }
        }
        ans=ans+l;
        cout<<ans<<endl;
    }
}
