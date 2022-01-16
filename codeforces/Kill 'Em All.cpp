#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,c=0,d,i;
        cin>>n>>d;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        for(i=n-1;i>=0;i--)
        {
            int temp=d*c;
            if(arr[i]-temp<=0)
            {
                break;
            }
            int var=arr[i];
            while(i>=0&&arr[i]==var)
            {
                i--;
            }
            i++;
            c++;
        }
        cout<<c<<endl;
    }
}
