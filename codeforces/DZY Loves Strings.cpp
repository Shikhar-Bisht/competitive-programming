#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,l,i,mx=0,ans=0;
    string s;
    cin>>s;
    l=s.length();
    cin>>k;
    int arr[26];
    for(i=0;i<26;i++)
    {
        cin>>arr[i];
        if(arr[i]>mx)
            mx=arr[i];
    }
    for(i=0;i<l;i++)
    {
        ans=ans+arr[s[i]-97]*(i+1);
    }
    for(i=l+1;i<=l+k;i++)
    {
        ans=ans+mx*i;
    }
    cout<<ans;
    return 0;
}
