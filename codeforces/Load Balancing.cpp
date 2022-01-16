#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i;
    cin>>n;
    long long arr[n],sum=0,ans=0;
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    long long var=sum/n,ext=sum%n;
    for(i=0; i<n; i++)
    {
        if(arr[i]>var+1)
        {
            ans=ans+(arr[i]-var-1);
            arr[i]=var+1;
        }
    }
    //cout<<ans<<endl;
    for(i=0;i<n;i++)
    {
        if(ext>0)
        {
            if(arr[i]>var)
            {
                ext--;
            }
        }
        else
        {
            if(arr[i]>var)
            {
                ans++;
            }
        }
    }
    cout<<ans;
}
