#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,arr[14],brr[14],j,ans=0;
    for(i=0;i<14;i++)
    {
        cin>>arr[i];
        brr[i]=arr[i];
    }
    for(i=0;i<14;i++)
    {
        long long var=arr[i];
        brr[i]=0;
        for(j=0;j<14;j++)
        {
            long long temp=var/14;
            brr[j]=brr[j]+temp;
        }
        var=var%14;
        long long temp=i+1;
        //cout<<var<<endl;
        for(j=0;j<var;j++)
        {
            if(temp==14)
            {
                temp=0;
            }
            brr[temp]++;
            temp++;
        }
        var=0;
        for(j=0;j<14;j++)
        {
            if(brr[j]%2==0)
            {
                var=var+brr[j];
            }
        }
        if(var>ans)
        {
            ans=var;
        }
        for(j=0;j<14;j++)
        {
            //cout<<brr[j]<<" ";
            brr[j]=arr[j];
        }
        //cout<<endl;
    }
    cout<<ans;
}
