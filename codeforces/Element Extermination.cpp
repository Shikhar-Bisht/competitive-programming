#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,var1,var2,i;
        cin>>n;
        for(i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            if(i==0)
            {
                var1=temp;
            }
            if(i==n-1)
            {
                var2=temp;
            }
        }
        if(var1<var2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
