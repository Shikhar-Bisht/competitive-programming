#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,sumw=0,maxh1=0,maxh2=0,var=0;
    cin>>n;
    long long w[n],h[n];
    for(i=0;i<n;i++)
    {
        cin>>w[i]>>h[i];
        sumw=sumw+w[i];
        if(h[i]>maxh1)
        {
            maxh1=h[i];
            var=i;
        }
    }
    for(i=0;i<n;i++)
    {
        if(i==var)
        {
            continue;
        }
        if(h[i]>maxh2)
        {
            maxh2=h[i];
        }
    }
    for(i=0;i<n;i++)
    {
        var=sumw-w[i];
        if(h[i]==maxh1)
        {
            cout<<var*maxh2<<" ";
        }
        else
        {
            cout<<var*maxh1<<" ";
        }
    }

}
