#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    for(i=n-1;i>=0;i--)
    {
        int temp=arr[i];
        int var=i;
        cout<<arr[i]<<endl;
        while(temp>0&&var>=0)
        {
            //cout<<arr[var]<<" ";
            temp--;
            var--;
            temp=min(temp,arr[var]);
            //cout<<temp<<" ";
        }
        cout<<endl;
        c++;
        i=var;
    }
    cout<<c;
}
