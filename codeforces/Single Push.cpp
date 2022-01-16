#include<bits/stdc++.h>
using namespace std;
void sol()
{
    int n,i,c=0,diff=0;
    cin>>n;
    int arr[n],brr[n];
    for(i=0; i<n; i++)
        cin>>arr[i];
    for(i=0; i<n; i++)
        cin>>brr[i];
    for(i=0; i<n; i++)
    {
        if(brr[i]<arr[i])
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    for(i=0; i<n; i++)
    {
        if(arr[i]!=brr[i])
        {
            c++;
            diff=brr[i]-arr[i];
            int inc=0;
            while((brr[i+inc]-arr[i+inc]==diff)&&(i+inc<n))
            {
                inc++;
            }
            i=i+inc-1;
        }
        if(c>1)
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    return;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        sol();
    }
    return 0;
}
