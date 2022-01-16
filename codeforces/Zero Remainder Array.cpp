#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        long long i;
        vector<long long> v;
        for(i=0; i<n; i++)
        {
            long long temp;
            cin>>temp;
            if(temp%k==0)
            {
                continue;
            }
            else
            {
                long long vari=temp%k;
                vari=k-vari;
                v.push_back(vari);
            }
        }
        for(i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        /*for(i=0;i<n;i++)
        {
            cout<<diff[i]<<" ";
        }*/
        sort(v.begin(),v.end());
        for(i=0;i<v.size();i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        long long x=0,ans=0;
        n=v.size();
        for(i=0; i<n; i++)
        {
            if(v[i]>x)
            {
                ans=ans+(v[i]-x);
                x=v[i]+1;
                ans++;
            }
            else if(v[i]<x)
            {
                long long tempr=x-v[i];
                if(tempr%k==0)
                {
                    ans++;
                    x++;
                }
                else
                {
                    long long vari=tempr%k;
                    vari=k-vari;
                    ans=ans+vari+1;
                    x=x+vari+1;
                }
            }
            else
            {
                ans++;
                x++;
            }
            cout<<v[i]<<" "<<ans<<" "<<x<<endl;
        }
        cout<<ans<<endl;
    }
}
