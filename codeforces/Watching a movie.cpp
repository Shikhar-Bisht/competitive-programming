#include<bits/stdc++.h>
using namespace std;
struct p{
int s,e;
};
int main()
{
    int n,x,i,prev=1;
    long long ans=0;
    cin>>n>>x;
    struct p gap[n];
    for(i=0;i<n;i++)
    {
        cin>>gap[i].s>>gap[i].e;
        ans=ans+gap[i].e-gap[i].s+1;
        int diff=gap[i].s-prev;
        int var=diff/x;
        ans=ans+diff-(var*x);
        prev=gap[i].e+1;
    }
    cout<<ans;
}
