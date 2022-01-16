#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    for(i=0;i<n;i=i+2)
        cout<<arr[i]<<" ";
    int var;
    if(n%2==0)
    {
        var=n-1;
    }
    else
    {
        var=n-2;
    }
    for(i=var;i>0;i=i-2)
    {
        cout<<arr[i]<<" ";
    }
}
