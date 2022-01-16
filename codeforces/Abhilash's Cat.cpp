#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,i;
    long long ans=1,var=1000000007;
    string s;
    cin>>s;
    l=s.length();
    for(i=0;i<l;i++)
    {
        long long temp=s[i]-'a'+1;
        ans=ans*temp;
        if(ans>=var)
        {
            ans=ans%var;
        }
        if(ans==0)
        {
            break;
        }
    }
    cout<<ans;
}
