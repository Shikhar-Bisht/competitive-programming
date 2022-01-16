#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k,i,var=0,j=0;
        cin>>n>>k;
        string s;
        cin>>s;
        long long arr[n],brr[k],ans[26];
        for(i=0;i<26;i++)
        {
            ans[i]=0;
        }
        for(i=0;i<k;i++)
        {
            cin>>brr[i];
        }
        sort(brr,brr+k,greater<int>());
        for(i=n-1;i>=0;i--)
        {
            long long temp=i+1;
            if(temp==brr[j])
            {
                while(brr[j]==temp&&j<k)
                {
                    var++;
                    j++;
                }
            }
            arr[i]=var;
        }
        /*for(i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }*/
        for(i=0;i<n;i++)
        {
            long long temp=s[i]-'a';
            long long var=arr[i]+1;
            ans[temp]=ans[temp]+var;
        }
        for(i=0;i<26;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}
