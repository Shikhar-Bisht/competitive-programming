#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],i,j;
    long long sum=0;
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<n;i++)
    {
        for(j=i-1;j>=0;j--)
        {
            sum=sum+(arr[j]%arr[i]);
            sum=sum+(arr[i]%arr[j]);
        }
        cout<<sum<<" ";
    }
}
