#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        int gr=arr[n-1];
        cout<<arr[n-1]<<" ";
        arr[n-1]=0;
        for(i=0;i<n-1;i++)
        {
            int var=0;
            while(arr[var]==0)
            {
                var++;
            }
            int m=gcd(arr[var],gr);
            for(int j=var;j<n-1;j++)
            {
                if(arr[j]==0)
                {
                    continue;
                }
                if(m<gcd(gr,arr[j]))
                {
                    m=gcd(gr,arr[j]);
                    var=j;
                }
            }
            cout<<arr[var]<<" ";
            arr[var]=0;
            gr=m;
        }
        cout<<endl;
    }
}
