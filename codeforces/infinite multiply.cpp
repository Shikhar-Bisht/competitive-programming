#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,ans="";
    cin>>s1>>s2;
    long long int l1=s1.length();
    long long int l2=s2.length();
    for(long long int i=0; i<l1+1; i++)
        ans='0'+ans;
    long long int var=l2-1;
    while(var>=0)
    {
        int temp1=s2[var]-'0';
        for(long long int i=l1-1; i>=0; i--)
        {
            int temp2=s1[i]-'0';
            int temp3=temp1*temp2;
            ans[i+1]=ans[i+1]+temp3%10;
            ans[i]=ans[i]+temp3/10;
            if(ans[i+1]>'9')
            {
                ans[i]=ans[i]+1;
                int var2=ans[i+1]-'0';
                ans[i+1]='0'+var2%10;
            }
            if(ans[i]>'9')
            {
                ans[i-1]=ans[i-1]+1;
                int var2=ans[i]-'0';
                ans[i]='0'+var2%10;
            }
        }
        ans='0'+ans;
        var=var-1;
    }
    cout<<ans;
    return 0;
}
