#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        int arr[m],brr[n],i,j,flag=0,c=0;
        for(i=0;i<m;i++)
            cin>>arr[i];
        for(i=0;i<n;i++)
            cin>>brr[i];
        i=0;
        j=0;
        while(i<m&&j<n)
        {
            if(flag==0)
            {
                if(arr[i]<=brr[j]&&i<m)
                {
                    i++;
                    if(i==m)
                    {
                        c++;
                    }
                }
                else
                {
                    flag=1;
                    c++;
                }
            }
            else
            {
                if(brr[j]<arr[i]&&j<n)
                {
                    j++;
                    if(j==n)
                    {
                        c++;
                    }
                }
                else
                {
                    flag=0;
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }
}
