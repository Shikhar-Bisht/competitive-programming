#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long  n,i,sum=0,flag=0;
    cin>>n;
    long long arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=n-1;i>0;i--)
    {
        arr[i-1]=min(arr[i-1],arr[i]-1);
        sum=sum+arr[i];
            if(arr[i-1]==0)
            {
                flag=1;
                    break;
            }
    }
    if(flag==0)
        sum=sum+arr[i];
    //cout<<i<<endl;
    //for(i=i;i<n;i++)
    //{
            //sum=sum+arr[i];
    //}
    cout<<sum;
}
