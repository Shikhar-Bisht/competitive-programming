#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    double arr[n],sum=0,half;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    half=sum/2;
    sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
        if(sum>=half)
        {
            break;
        }
    }
    cout<<i+1;
}
