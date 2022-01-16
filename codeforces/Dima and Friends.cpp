#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,i,ans=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        sum=sum+temp;
    }
    int var=1;
    while(var<=5)
    {
        if((sum+var)%(n+1)!=1)
        {
            ans++;
        }
        var++;
    }
    cout<<ans;
    return 0;
}
