#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[7];
    for(int i=0;i<7;i++)
        cin>>arr[i];
    int ans=1;
    while(n-arr[ans-1]>0)
    {
        n=n-arr[ans-1];
        ans++;
        if(ans==8)
            ans=1;
    }
    cout<<ans;
    return 0;
}
