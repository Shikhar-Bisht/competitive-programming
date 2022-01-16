#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,ans=0;
    cin>>n;
    long long arr[2*n];
    for(i=0;i<2*n;i++)
    {
        arr[i]=0;
    }
    for(i=0;i<2*n;i++)
    {
        long long temp;
        cin>>temp;
        long long var=temp-1;
        temp=2*var;
        if(arr[temp]==0)
        {
            arr[temp]=i+1;
        }
        else
        {
            arr[temp+1]=i+1;
        }
    }
    long long a=1,b=1;
    /*for(i=0;i<2*n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;*/
    for(i=0;i<2*n;i=i+2)
    {
        //cout<<a<<" "<<b<<" "<<ans<<endl;
        long long temp1=abs(a-arr[i])+abs(b-arr[i+1]),temp2=abs(a-arr[i+1])+abs(b-arr[i]);
        if(temp1<=temp2)
        {
            ans=ans+abs(a-arr[i])+abs(b-arr[i+1]);
            a=arr[i];
            b=arr[i+1];
        }
        else
        {
            ans=abs(a-arr[i+1])+abs(b-arr[i]);
            a=arr[i+1];
            b=arr[i];
        }
    }
    cout<<ans;
}
