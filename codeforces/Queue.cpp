#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c=0;
    long long var=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(i=0;i<n;i++)
    {
        if(var<=arr[i])
        {
            var=var+arr[i];
            c++;
        }
    }
    cout<<c;
}
