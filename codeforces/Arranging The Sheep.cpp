#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,i;
        cin>>n;
        string s;
        cin>>s;
        vector<long long> v;
        for(i=0;i<n;i++)
        {
            if(s[i]=='*')
            {
                v.push_back(i);
            }
        }
        long long l=v.size();
        /*cout<<l<<endl;
        for(i=0;i<l;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;*/
        long long var=l/2;
        long long c=1;
        long long ans=0;
        for(i=0;i<var;i++)
        {
            long long temp=v[i+1]-v[i];
            if(temp>1)
            {
                temp--;
                ans=ans+(temp*c);
                c++;
            }
            else
            {
                c++;
            }
        }
        c=1;
        //cout<<ans<<endl;
        for(i=l-1;i>var;i--)
        {
            long long temp=v[i]-v[i-1];
            if(temp>1)
            {
                temp--;
                ans=ans+(temp*c);
                c++;
            }
            else
            {
                c++;
            }
        }
        cout<<ans<<endl;
    }
}
