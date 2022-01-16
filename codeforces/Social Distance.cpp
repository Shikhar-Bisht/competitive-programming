#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i,c1=0,ans=0;
        cin>>n>>k;
        string s;
        cin>>s;
        for(i=0;i<k;i++)
        {
            if(s[i]=='1')
            {
                c1++;
            }
        }
        for(i=0;i<n;i++)
        {
            int temp1=i+k,temp2=i-k-1;
            if(temp2>=0)
            {
                if(s[temp2]=='1')
                {
                    c1--;
                }
            }
            if(temp1<n)
            {
                if(s[temp1]=='1')
                {
                    c1++;
                }
            }
            if(c1==0)
            {
                ans++;
                s[i]='1';
                c1++;
            }
        }
        //cout<<s<<endl;
        cout<<ans<<endl;
    }
}
