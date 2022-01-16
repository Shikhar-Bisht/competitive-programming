#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        long long c=0;
        cin>>n;
        long long arr[n];
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        i=0;
        while(i<n-1)
        {
            if(arr[i]<=arr[i+1])
            {
                i++;
            }
            else
            {
                int m=0;
                int var=i+1;
                while(arr[var]<arr[i]&&var<n)
                {
                    if(arr[var]>m)
                        m=arr[var];
                    var++;
                }
                var=i+1;
                while(arr[var]<arr[i]&&var<n)
                {
                    arr[var]=arr[var]+(arr[i]-m);
                    var++;
                }
                c=c+(arr[i]-m);
            }
        }
        /*for(i=0;i<n;i++)
            cout<<arr[i]<<" ";*/
        cout<<c<<endl;
    }
    return 0;
}
