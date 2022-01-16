#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],b[n]={};
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        b[arr[i]-1]++;
    }
    int max=b[0];
    int ans=0;
    for(int i=0;i<n;i++)
        {
           if(b[i]>max)
           {
               max=b[i];
               ans=i;
           }
        }
        cout<<ans+1;
    return 0;
}
