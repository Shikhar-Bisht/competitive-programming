#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n],i,c=0,j,maxi;
        vector<int> m(n+1);
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            m[arr[i]]++;
            if(i==0)
            {
                maxi=arr[i];
            }
            else
            {
                if(maxi<arr[i])
                {
                    maxi=arr[i];
                }
            }
        }
        for(i=0;i<n-1;i++)
        {
            int sum=arr[i];
            for(j=i+1;j<n;j++)
            {
                sum=sum+arr[j];
                if(sum>maxi)
                {
                    break;
                }
                if(m[sum]>0)
                {
                    //cout<<sum<<endl;
                    c=c+m[sum];
                    m[sum]=0;
                }
            }
        }
        cout<<c<<endl;
    }
}
