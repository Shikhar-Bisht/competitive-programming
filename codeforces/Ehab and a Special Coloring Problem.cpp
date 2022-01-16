#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i;
    cin>>n;
    n++;
    long long arr[n],ans[n];
    for(i=2;i<n;i++)
    {
        arr[i]=1;
    }
    long long var=0;
    for(i=2;i<n;i++)
    {
        if(arr[i]==1)
        {
            var++;
            long long j=1;
            long long temp=i*j;
            while(temp<n)
            {
                //cout<<temp<<endl;
                arr[temp]=0;
                ans[temp]=var;
                j++;
                temp=i*j;
            }
        }
    }
    for(i=2;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
}
