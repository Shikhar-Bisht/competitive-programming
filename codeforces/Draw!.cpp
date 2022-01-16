#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long prm=0,ans=0;
    while(n--)
    {
        long long a,b;
        cin>>a>>b;
        if(a>=prm&&b>=prm)
        {
            long long temp1=a-prm+1,temp2=b-prm+1;
            ans=ans+min(temp1,temp2);
            if(a==b)
            {
                prm=a+1;
            }
            else
            {
                prm=max(a,b);
            }
        }
        else
        {
            prm=max(prm,a);
            prm=max(prm,b);
        }
    }
    cout<<ans;
}
