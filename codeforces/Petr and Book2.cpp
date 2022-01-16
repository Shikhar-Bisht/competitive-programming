#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int arr[7];
    for(int i=0; i<7; i++)
        cin>>arr[i];
    for(int i=0; i<7; i++)
        sum=sum+arr[i];
    n=n%sum;
    if(n==0)
    {
        int i;
        for(i=6; i>=0; i--)
        {
            if(arr[i]!=0)
                break;
        }
        cout<<i+1;
    }
    else
    {
        int ans=1;
        while(n-arr[ans-1]>0)
        {
            n=n-arr[ans-1];
            ans++;
            if(ans==8)
                ans=1;
        }
        cout<<ans;
    }
    return 0;
}
