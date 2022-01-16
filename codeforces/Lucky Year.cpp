#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,c=0,temp,ans;
    cin>>n;
    temp=n;
    while(temp>=10)
    {
        temp=temp/10;
        c++;
    }
    if(n%10==0)
    {
        ans=pow(10,c);
        cout<<ans;
    }
    else
    {
        temp=temp+1;
        ans=temp*pow(10,c);
        ans=ans-n;
        cout<<ans;
    }
    return 0;
}
