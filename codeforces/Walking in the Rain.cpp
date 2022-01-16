#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i==0)
        {
            continue;
        }
        else if(i==1)
        {
            ans=max(arr[i-1],arr[i]);
        }
        else
        {
            if(max(arr[i-1],arr[i])<ans)
            {
                ans=ans=max(arr[i-1],arr[i]);;
            }
        }
    }
    if(n==1)
    {
        cout<<arr[0];
    }
    else if(min(arr[0],arr[n-1])<ans)
    {
        cout<<min(arr[0],arr[n-1]);
    }
    else
    {
        cout<<ans;
    }
}
