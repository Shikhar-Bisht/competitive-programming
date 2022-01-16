
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,w,c=0;
        cin>>n>>w;
        int arr[n],i,j;
        for(i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        i=0;
        j=n-1;
        /*if(n==97)
        {
            for(i=0;i<n;i++)
            {
                cout<<arr[i]<<endl;
            }
        }*/
        while(i<=j)
        {
            int sum=arr[j];
            j--;
            while(i<=j&&(sum+arr[i])<=w)
            {
                sum=sum+arr[i];
                i++;
            }
            cout<<sum<<" "<<i<<" "<<j<<endl;
            cout<<arr[i]<<" "<<arr[j]<<endl;
            //cout<<sum<<endl;
            c++;
        }
        cout<<endl;
        cout<<c<<endl;
    }
}
