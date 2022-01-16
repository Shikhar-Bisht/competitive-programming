#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,mini,flag=0;
        cin>>n;
        int arr[n],brr[n];
        vector<int> v;
        for(i=0;i<n;i++)
        {
            brr[i]=0;
        }
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(i==0)
            {
                mini=arr[i];
            }
            else
            {
                if(arr[i]<mini)
                {
                    mini=arr[i];
                }
            }
        }
        for(i=0;i<n;i++)
        {
            if(arr[i]%mini==0)
            {
                brr[i]=1;
                v.push_back(arr[i]);
            }
        }
        sort(v.begin(),v.end());
        j=0;
        for(i=0;i<n;i++)
        {
            if(brr[i]==1)
            {
                arr[i]=v[j];
                j++;
            }
        }
        for(i=0;i<n-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
