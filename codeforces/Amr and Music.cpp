#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,sum=0,i,c=0;
    cin>>n>>k;
    int arr[n],brr[n];
    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(i=0; i<n; i++)
    {
        brr[i]=arr[i];
    }
    sort(arr,arr+n);
    i=0;
    while(sum+arr[i]<=k&&i<n)
    {
        sum=sum+arr[i];
        c++;
        i++;
    }
    cout<<c<<endl;
        for(i=0; i<c; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(arr[i]==brr[j])
                {
                    cout<<j+1<<" ";
                    brr[j]=0;
                    break;
                }
            }
        }
    return 0;
}
