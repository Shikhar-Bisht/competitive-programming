#include<bits/stdc++.h>
using namespace std;
int dp[100005];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t,n,p,k,x,y,ans;
    string s;
    cin>>t;
    while(t--){
        ans=0x7fffffff;
        cin>>n>>p>>k>>s>>x>>y;
        memset(dp,0,sizeof(dp));
        for(int i=n-1,j=1;i>=p-1;i--,j++){
            if(j<=k){
                if(s[i]=='0') dp[i]=x;
            }else{
                if(s[i]=='0') dp[i]=dp[i+k]+x;
                else dp[i]=dp[i+k];
            }
        }
        for(int i=p-1,j=0;i<=n-1;i++,j++){
            ans=min(ans,dp[i]+j*y);
        }
        cout<<ans<<endl;
    }
    return 0;
}
