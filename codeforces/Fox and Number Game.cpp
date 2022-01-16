#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,result,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i==0)
        {
                result=arr[i];
        }
        else
        {
                result=__gcd(arr[i],result);
        }
    }
    cout<<result*n;
}
