#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n],i,brr[n],ans=0,maxi=0,vari=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        if(temp==0)
        {
            brr[i]=arr[i];
        }
        else
        {
            ans=ans+arr[i];
            brr[i]=0;
        }
    }
    i=0;
    int temp=k;
    while(i<n&&temp--)
    {
        vari=vari+brr[i];
        i++;
    }
    maxi=vari;
    for(i=k;i<n;i++)
    {
        vari=vari-brr[i-k];
        vari=vari+brr[i];
        if(vari>maxi)
        {
            maxi=vari;
        }
    }
    cout<<ans+maxi;
}
