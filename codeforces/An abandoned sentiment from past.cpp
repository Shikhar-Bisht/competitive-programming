#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n],brr[k];
    int i,j;
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(j=0;j<k;j++)
        cin>>brr[j];
    if(k>1)
    {
        cout<<"Yes";
        return 0;
    }
    else if(k==1)
    {
        for(i=0;i<n;i++)
        {
            if(arr[i]==0)
                arr[i]=brr[0];
        }
    }
    for(i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"No";
    return 0;
}
