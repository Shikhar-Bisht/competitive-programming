#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,m;
    cin>>n>>m;
    ll arr[n],diff[n-1],i,intr[m];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i>0)
        {
            diff[i-1]=arr[i]-arr[i-1];
        }
    }
    for(i=0;i<m;i++)
    {
        cin>>intr[i];
    }
    ll lcd=diff[0];
    for(i=1;i<n-1;i++)
    {
        lcd=__gcd(lcd,diff[i]);
    }
    int flag=0;
    //cout<<lcd<<endl;
    for(i=0;i<m;i++)
    {
        if(lcd%intr[i]==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES"<<endl;
        cout<<arr[0]<<" "<<i+1;
    }
}
