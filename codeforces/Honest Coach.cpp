#include<bits/stdc++.h>
using namespace std;
int minimum(int arr[],int n)
{
    int i,j;
    int mini;
    if((arr[0]-arr[1])<0)
        mini=-(arr[0]-arr[1]);
    else
        mini=arr[0]-arr[1];
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            int temp=arr[i]-arr[j];
            if(temp<0)
                temp=0-temp;
            if(temp<mini)
                mini=temp;
        }
    }
    return mini;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int i;
        int a[x];
        for(i=0;i<x;i++)
        {
            cin>>a[i];
        }
        int ans=minimum(a,x);
        cout<<ans<<endl;
    }
}

