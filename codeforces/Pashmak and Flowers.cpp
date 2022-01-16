#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long arr[n],i,maxi,mini,cma=0,cmi=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i==0)
        {
            mini=arr[i];
            maxi=arr[i];
        }
        else
        {
            if(arr[i]>maxi)
            {
                maxi=arr[i];
            }
            if(arr[i]<mini)
            {
                mini=arr[i];
            }
        }
    }
    cout<<maxi-mini<<" ";
    for(i=0;i<n;i++)
    {
        if(arr[i]==maxi)
        {
            cma++;
        }
        if(arr[i]==mini)
        {
            cmi++;
        }
    }
    /*if(n==200000)
    {
        cout<<cmi<<" "<<cma<<endl;
    }*/
    if(maxi==mini)
    {
        if(cma%2==0)
        {
            long long var=cma/2;
            long long temp=(cma-1)*var;
            cout<<temp;
        }
        else
        {
            long long var=cma/2;
            long long temp=var*cma;
            cout<<temp;
        }
    }
    else
    {
        long long temp=cma*cmi;
        cout<<temp;
    }
}
