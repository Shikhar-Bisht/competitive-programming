#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,ans=-1;
    cin>>n;
    int arr[n][2];
    int mi,ma;
    for(i=0;i<n;i++)
    {
        cin>>arr[i][0]>>arr[i][1];
        if(i==0)
        {
            mi=arr[i][0];
            ma=arr[i][1];
        }
        else
        {
            if(mi>arr[i][0])
            {
                mi=arr[i][0];
            }
            if(ma<arr[i][1])
            {
                ma=arr[i][1];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i][0]==mi&&arr[i][1]==ma)
        {
            ans=i+1;
            break;
        }
    }
    cout<<ans;
}
