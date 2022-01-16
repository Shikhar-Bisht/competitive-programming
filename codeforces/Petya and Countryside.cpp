#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    int m=1;
    for(i=0;i<n;i++)
    {
        int var=arr[i];
        int var1=i-1,var2=i+1;
        int c=1;
        while(var1>=0&&arr[var1]<=var)
        {
            c++;
            var=arr[var1];
            var1--;
        }
        var=arr[i];
        while(var2<n&&arr[var2]<=var)
        {
            c++;
            var=arr[var2];
            var2++;
        }
        if(c>m)
        {
            m=c;
        }
    }
    cout<<m;
}
