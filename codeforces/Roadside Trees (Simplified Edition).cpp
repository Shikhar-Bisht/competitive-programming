#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0,i;
    cin>>n;
    int temp1,temp2;
    for(i=0;i<n;i++)
    {
        cin>>temp1;
        if(i==0)
        {
            ans=ans+temp1+1;
        }
        else
        {
            ans=ans+abs(temp1-temp2)+2;
        }
        temp2=temp1;
    }
    cout<<ans;
    return 0;
}
