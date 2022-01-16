#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i,j,flag=0,ans=0;
        cin>>n>>k;
        string s;
        cin>>s;
        int var;
        if(k%2==1)
        {
            flag=1;
            var=k/2;
        }
        else
        {
            var=k/2-1;
        }
        for(i=0; i<=var; i++)
        {
            vector<int> v(26);
            int maxi=0,c=0;
            for(j=i; j<n; j=j+k)
            {
                int temp=s[j]-'a',tempr=j/k;
                tempr=tempr*k;
                v[temp]++;
                c++;
                if(v[temp]>maxi)
                {
                    maxi=v[temp];
                }
                if(flag==0||i!=var)
                {
                    tempr=tempr+k-i-1;
                    temp=s[tempr]-'a';
                    v[temp]++;
                    c++;
                    if(maxi<v[temp])
                    {
                        maxi=v[temp];
                    }
                }
            }
            //cout<<maxi<<endl;
            ans=ans+c-maxi;
        }
        cout<<ans<<endl;
    }
}
