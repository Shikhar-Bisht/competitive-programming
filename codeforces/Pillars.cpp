#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m=0,flag=0,i,var;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>m)
        {
            m=arr[i];
            var=i;
        }
    }
    //cout<<m<<" "<<var<<endl;
    for(i=var;i<n-1;i++)
    {
        if(arr[i]<arr[i+1])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        for(i=var;i>0;i--)
        {
            if(arr[i]<arr[i-1])
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
