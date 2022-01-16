#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,m,ans=0,i;
        long long var=0;
        cin>>n>>m;
        int arr[10];
        for(i=1;i<=10;i++)
        {
            long long temp=m*i;
            long long var1=temp%10;
            arr[i-1]=var1;
            var=var+var1;
        }
        //cout<<var<<endl;
        long long temp=n/m;
        long long temp1=temp/10;
        ans=temp1*var;
        var=temp%10;
        //cout<<var<<endl;
        for(i=0;i<var;i++)
        {
            ans=ans+arr[i];
        }
        cout<<ans<<endl;
    }
}
