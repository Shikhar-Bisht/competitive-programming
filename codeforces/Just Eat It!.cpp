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
        int arr[n],i;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int flag=0;
        long long sum=0;
        for(i=0;i<n-1;i++)
        {
            sum=sum+arr[i];
            if(sum<=0)
            {
                flag=1;
            }
        }
        sum=0;
        for(i=n-1;i>=1;i--)
        {
            sum=sum+arr[i];
            if(sum<=0)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            cout<<"No"<<endl;
        }
        else
        {
            cout<<"Yes"<<endl;
        }
    }
}
