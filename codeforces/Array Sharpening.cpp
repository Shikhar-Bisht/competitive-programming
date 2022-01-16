#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,flag=0;
        cin>>n;
        int arr[n],i;
        for(i=0;i<n;i++)
            cin>>arr[i];
        for(i=0;i<n;i++)
        {
            if(arr[i]<i)
            {
                break;
            }
        }
        for(i=i;i<n;i++)
        {
            if(i-1>=0)
            {
                arr[i]=min(arr[i],arr[i-1]-1);
            }
            if(arr[i]<0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}
