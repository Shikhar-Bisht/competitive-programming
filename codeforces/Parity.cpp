#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,n,i,sum=0;
    cin>>x>>n;
    int arr[n];
    for(i=0; i<n; i++)
        cin>>arr[i];
    if(x%2==0)
    {
        if(arr[n-1]%2==0)
            cout<<"even";
        else
            cout<<"odd";
    }
    else
    {
        for(i=0; i<n; i++)
        {
            if(arr[i]%2!=0)
                sum++;
        }
        if(sum%2==0)
            cout<<"even";
        else
            cout<<"odd";
    }
    return 0;
}

