#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,c=0;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
            cin>>arr[i];
        int var=n-1;
        while(arr[var]==arr[n-1])
        {
            var--;
        }
        if(n==1)
        {
            cout<<0<<endl;
        }
        else if(arr[n-1]>arr[var])
        {
            var=n-1;
            while(var>=1&&arr[var]>=arr[var-1])
            {
                c++;
                var--;
            }
            c++;
            cout<<n-c<<endl;
        }
        else
        {
            var=n-1;
            while(var>=1&&arr[var]<=arr[var-1])
            {
                c++;
                var--;
            }
            while(var>=1&&arr[var]>=arr[var-1])
            {
                c++;
                var--;
            }
            c++;
            cout<<n-c<<endl;
        }
    }
}
