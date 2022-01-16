#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=1;i<n-1;i++)
    {
        if(arr[i]==0)
        {
            if(arr[i-1]==1&&arr[i+1]==1)
            {
                c++;
                arr[i+1]=0;
            }
        }
    }
    cout<<c;
    return 0;
}
