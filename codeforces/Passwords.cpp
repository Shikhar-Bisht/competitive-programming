#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,pass,i;
    cin>>n>>k;
    int arr[n];
    for(i=0;i<n;i++)
    {
        string c;
        cin>>c;
        arr[i]=c.length();
    }
    sort(arr,arr+n);
    string v;
    cin>>v;
    pass=v.length();
    for(i=0;i<n;i++)
    {
        if(arr[i]==pass)
        {
            break;
        }
    }
    int mi=i+1,ma=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]>pass)
            break;
        ma++;
    }
    int ans1,ans2;
    if(mi%k==0)
    {
        ans1=mi+(mi/k-1)*5;
    }
    else
    {
        ans1=mi+(mi/k)*5;
    }
    if(ma%k==0)
    {
        ans2=ma+(ma/k-1)*5;
    }
    else
    {
        ans2=ma+(ma/k)*5;
    }
    cout<<ans1<<" "<<ans2;
}
