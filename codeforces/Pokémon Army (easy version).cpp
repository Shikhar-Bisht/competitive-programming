#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,q,ans=0,i,j,flag=0;
        cin>>n>>q;
        long long arr[n];
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        if(n==1)
        {
            cout<<arr[0]<<endl;
            continue;
        }
        for(i=1; i<n; i++)
        {
            if(flag==0)
            {
                while(i<n&&arr[i]>=arr[i-1])
                {
                    i++;
                }
                ans=ans+arr[i-1];
                flag=1;
            }
            else
            {
                while(i<n&&arr[i]<=arr[i-1])
                {
                    i++;
                }
                if(i!=n)
                {
                    ans=ans-arr[i-1];
                }
                flag=0;
            }
            i=i-1;
        }
        cout<<ans<<endl;
    }
}
