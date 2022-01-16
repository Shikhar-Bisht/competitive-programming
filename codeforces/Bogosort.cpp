#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l;
        cin>>l;
        int arr[l];
        for(int i=0;i<l;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+l);
        for(int i=l-1;i>=0;i--)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
