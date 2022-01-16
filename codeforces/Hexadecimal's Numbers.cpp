#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0,i=0;
    cin>>n;
    while(n>0)
    {
        int temp=n%10;
        if(temp==1)
        {
            ans=ans+pow(2,i);
        }
        else if(temp>1)
        {
            ans=pow(2,i+1)-1;
        }
        n=n/10;
        i++;
    }
    cout<<ans;
}
