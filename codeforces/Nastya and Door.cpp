#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n],i,brr[n],maxi=0,l=0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n;i++)
        {
            brr[i]=0;
        }
        for(i=1;i<n;i++)
        {
            if(arr[i]>arr[i-1])
            {
                while(i<n&&arr[i]>arr[i-1])
                {
                    i++;
                }
                i--;
                if(i!=n-1)
                {
                    brr[i]=1;
                }
            }
        }
        /*for(i=0;i<n;i++)
        {
            cout<<brr[i]<<" ";
        }
        cout<<endl;*/
        for(i=1;i<k-1;i++)
        {
            if(brr[i]==1)
            {
                maxi++;
            }
        }
        int c=maxi,var=k-2;
        for(i=k-1;i<n;i++)
        {
            if(brr[i-var]==1)
            {
                c--;
            }
            if(brr[i]==1)
            {
                c++;
            }
            if(c>maxi)
            {
                maxi=c;
                l=i-var;
            }
        }
        cout<<maxi+1<<" "<<l+1<<endl;
    }
}
