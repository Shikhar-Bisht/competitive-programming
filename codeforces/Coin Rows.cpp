#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long arr[n],brr[n],i,subrr=0,csum=0,finals=-1;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>brr[i];
            subrr=subrr+brr[i];
        }
        for(i=n-1;i>=0;i--)
        {
            if(i+1<n)
            {
                csum=csum+arr[i+1];
            }
            subrr=subrr-brr[i];
            long long temp=max(subrr,csum);
            if(finals==-1)
            {
                finals=temp;
            }
            else
            {
                if(temp<finals)
                {
                    finals=temp;
                }
            }
        }
        cout<<finals<<endl;
    }
}
