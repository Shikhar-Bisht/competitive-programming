#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,d;
    cin>>t;
    for(d=0;d<t;d++)
    {
        long long int n,k,i,c=0;
        cin>>n>>k;
        long long int arr[n],a[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(arr[i]==arr[j])
                {
                    c++;
                }
            }
            a[i]=c;
            c=0;
        }
        long long int m=0;
        long long int ao=0;
        for(i=0;i<n;i++)
        {
            if(a[i]>a[m])
            {
                m=i;
            }
        }
        for(i=0;i<n;i++)
        {
            if(arr[i]!=arr[m])
            {
            ao++;
            }
        }
        if(ao%k==0)
            {
            cout<<ao/k<<endl;
            }
        else
           {
            int z=(ao/k)+1;
            cout<<z<<endl;
           }
    }
    return 0;
}
