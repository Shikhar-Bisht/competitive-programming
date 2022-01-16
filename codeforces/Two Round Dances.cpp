#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int temp=n/2;
    long long ans=1;
    for(i=n-1;i>0;i--)
    {
        if(i==temp)
        {
            continue;
        }
        ans=ans*i;
    }
    cout<<ans;
}
