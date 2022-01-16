#include<bits/stdc++.h>
#define ll unsigned long long
using namespace std;
int main()
{
    ll n;
    cin>>n;
    ll mini,temp1=1,temp2=1,ans=0,i,tempr=5;
    mini=min(tempr,(n-5));
    for(i=1;i<=mini;i++)
    {
        temp1=temp1*i;
        ll var=n-i+1;
        temp2=temp2*var;
    }
    //cout<<temp1<<" "<<temp2<<endl;
    ll adi=temp2/temp1;
    //cout<<adi<<endl;
    ans=ans+adi;
    temp1=1;
    temp2=1;
    tempr=6;
    mini=min(tempr,(n-6));
    for(i=1;i<=mini;i++)
    {
        temp1=temp1*i;
        ll var=n-i+1;
        temp2=temp2*var;
    }
    //cout<<temp1<<" "<<temp2<<endl;
    adi=temp2/temp1;
    //cout<<adi<<endl;
    ans=ans+adi;
    temp1=1;
    temp2=1;
    tempr=7;
    mini=min(tempr,(n-7));
    for(i=1;i<=mini;i++)
    {
        temp1=temp1*i;
        ll var=n-i+1;
        temp2=temp2*var;
        if(temp2%temp2==0)
        {
            temp2=temp2/temp1;
            temp1=1;
        }
    }
    //cout<<temp1<<" "<<temp2<<endl;
    adi=temp2/temp1;
    //cout<<adi<<endl;
    ans=ans+adi;
    cout<<ans;
}
