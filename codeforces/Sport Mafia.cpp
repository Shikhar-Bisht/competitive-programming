#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,sum=0,val,ans=0;
    cin>>n>>val;
    int var=n;
    for(int i=1; i<=n; i++)
    {
        sum=sum+i;
    }
    while(sum!=val)
    {
            ans++;
            int temp=var+1;
            sum=sum-temp;
            var--;

    }
    cout<<ans;
    return 0;
}
