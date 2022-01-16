#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,k;
    cin>>n>>q>>k;
    int arr[n],i;
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<q;i++)
    {
        int temp1,temp2,ans=0;
        cin>>temp1>>temp2;
        temp1--;
        temp2--;
        int var1=arr[temp1],var2=arr[temp2];
        ans=(var1-1)+(k-var2);
        int temp=(var2-var1)-(temp2-temp1);
        temp=temp*2;
        ans=ans+temp;
        cout<<ans<<endl;
    }
}
