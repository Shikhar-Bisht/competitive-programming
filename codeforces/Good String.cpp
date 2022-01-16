#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,ans=0;
    cin>>n;
    string s;
    cin>>s;
    vector <char> v;
    for(i=0;i<n-1;i++)
    {
        v.push_back(s[i]);
        if(s[i]==s[i+1])
        {
            int var=i+1;
            while(var<n&&s[i]==s[var])
            {
                ans++;
                var++;
            }
            i=var;
            if(i<n)
            {
                v.push_back(s[i]);
            }
        }
        else
        {
            v.push_back(s[i+1]);
            i++;
        }
    }
    if(i==n-1)
    {
        v.push_back(s[n-1]);
    }
    if(v.size()%2==0)
    {
        cout<<ans<<endl;
        for(i=0;i<v.size();i++)
        {
            cout<<v[i];
        }
    }
    else
    {
        cout<<ans+1<<endl;
        int temp=v.size()-1;
        for(i=0;i<temp;i++)
        {
            cout<<v[i];
        }
    }
}
