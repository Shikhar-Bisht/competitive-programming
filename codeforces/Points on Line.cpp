#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,d;
    long long sum=0;
    cin>>n>>d;
    long long arr[n],i,j;
    for(i=0;i<n;i++)
        cin>>arr[i];
    j=0;
    for(i=0;i<n;i++)
    {
        while(j<n&&arr[j]<=arr[i]+d)
        {
            j++;
        }
        long long temp=j-i-2;
        if(temp<=0)
        {
            continue;
        }
        long long var=temp*(temp+1);
        var=var/2;
        sum=sum+var;
    }
    cout<<sum;
}
