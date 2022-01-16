#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],srr[n],i,maxi=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        srr[i]=arr[i];
    }
    sort(srr,srr+n);
    map<int,int> m;
    for(i=0;i<n;i++)
    {
        m[srr[i]]=i;
    }
    int c=0;
    for(i=0;i<n;i++)
    {
        int var=m[arr[i]];
        while(i<=var)
        {
            if(m[arr[i]]>var)
            {
                var=m[arr[i]];
            }
            arr[i]=c;
            i++;
        }
        c++;
    }
    for(i=0;i<n;i++)
    {
        int j=i,c=0;
        while(j<n&&arr[i]==arr[j])
        {
            c++;
            j++;
        }
        if(c>maxi)
        {
            maxi=c;
        }
        i=j-1;
    }
    cout<<maxi;
}
