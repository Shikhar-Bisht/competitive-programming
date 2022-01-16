#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        if(n<=3)
        {
            cout<<n-1<<endl;
            continue;
        }
        for(i=1; i<n; i++)
        {
            if(n/i<=i)
            {
                break;
            }
        }
        if(n%i==0)
        {
            cout<<i+n/i-2<<endl;
        }
        else
        {
            cout<<i+n/i-1<<endl;
        }
    }
}
