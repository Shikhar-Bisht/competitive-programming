
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,sol=0,val,ans=0,c=1;
    cin>>n>>val;
    sol = -n;
    while(sol!=val)
    {
        sol=sol+c+1;
        c++;
        ans++;
    }
    cout<<n-ans;
    return 0;
}
