#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,ans=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i>=1)
        {
            if(ans<(arr[i-1]-arr[i]-k))
            {
                ans=arr[i-1]-arr[i]-k;
            }
        }
    }
    cout<<ans;
    return 0;
}
