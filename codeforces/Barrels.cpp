#include<bits/stdc++.h>
using namespace std;
void sortfun(int arr[],int n)
{
    int i,j,c=0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
                c++;
            }
        }
        if(c==0)
            break;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,b,i;
        cin>>n>>b;
        int arr[n];
        for(i=0; i<n; i++)
            cin>>arr[i];
        sortfun(arr,n);
        for(i=0;i<b;i++)
        {
            arr[n-1]=arr[n-1]+arr[n-2-i];
        }
        cout<<arr[n-1]<<endl;
    }
}
