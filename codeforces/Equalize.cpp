#include<bits/stdc++.h>
using namespace std;
char flip(char a)
{
    if(a=='0')
    {
        return '1';
    }
    else
    {
        return '0';
    }
}
int main()
{
    int n,ans=0,i;
    cin>>n;
    string a,b;
    cin>>a>>b;
    for(i=0;i<n-1;i++)
    {
        if(a[i]!=b[i])
        {
            if(a[i]!=a[i+1]&&a[i+1]!=b[i+1])
            {
                a[i+1]=flip(a[i+1]);
                ans++;
            }
            else
            {
                ans++;
            }
        }
    }
    if(a[n-1]!=b[n-1])
    {
        ans++;
    }
    cout<<ans;
}
