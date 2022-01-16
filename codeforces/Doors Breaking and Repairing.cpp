#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,ans=0;
    cin>>n>>x>>y;
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        if(temp<=x)
        {
            ans++;
        }
    }
    if(x>y)
    {
        cout<<n;
    }
    else
    {
        int var=ans/2;
        if(ans%2==0)
        {
            cout<<var;
        }
        else
        {
            cout<<var+1;
        }
    }
}
