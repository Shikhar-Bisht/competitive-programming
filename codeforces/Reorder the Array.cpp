#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],i,c=0;
    /*map<int,int> m;
    for(i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        m[temp]++;
    }
    map<int,int>::iterator it;
    int var=0,ans=0;
    for(it=m.begin();it!=m.end();it++)
    {
        if(it==m.begin())
        {
            var=it->second;
            ans=it->second;
        }
        else
        {
            var=var-it->second;
            if(var<0)
            {
                ans=ans+abs(var);
                var=0;
            }
            var=var+it->second;
        }
    }
    cout<<n-ans;*/
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    i=0;
    int j=0;
    while(i<n&&j<n)
    {
        if(arr[i]<arr[j])
        {
            i++;
            j++;
            c++;
        }
        else
        {
            j++;
        }
    }
    cout<<c;
}
