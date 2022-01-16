#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        while(arr[i]%2==0)
        {
            arr[i]=arr[i]/2;
        }
        while(arr[i]%3==0)
        {
            arr[i]=arr[i]/3;
        }
    }
    int flag=0;
    for(i=0;i<n-1;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}
