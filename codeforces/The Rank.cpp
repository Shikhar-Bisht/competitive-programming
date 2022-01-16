#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum,x,i,a,b,c,d,r=1;
    cin>>x;
    int arr[x];
    for(i=0;i<x;i++)
    {
        cin>>a>>b>>c>>d;
        sum=a+b+c+d;
        arr[i]=sum;
    }
    int m=arr[0];
    for(i=0;i<x;i++)
    {
        if(arr[i]>m)
            r++;
    }
    cout<<r;
    return 0;
}

