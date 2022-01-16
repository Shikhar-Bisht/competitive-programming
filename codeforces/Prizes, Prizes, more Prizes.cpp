#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,k=0,j;
    cin>>n;
    long long arr[n],brr[5],ans[5];
    for(i=0;i<5;i++)
        ans[i]=0;
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<5;i++)
        cin>>brr[i];
    for(i=0;i<n;i++)
    {
        k=k+arr[i];
        for(j=4;j>=0;j--)
        {
            long long temp=k/brr[j];
            ans[j]=ans[j]+temp;
            temp=temp*brr[j];
            k=k-temp;
        }
    }
    for(i=0;i<5;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    cout<<k;
}
