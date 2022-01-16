#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,i,n;
        cin>>m;
        n=m+2;
        int arr[n];
        for(i=0; i<n; i++)
            cin>>arr[i];
        sort(arr,arr+n);
        long long s=0;
        for(i=0; i<n-2; i++)
            s=s+arr[i];
        //cout<<s<<endl;
        if(s==arr[n-2]||s==arr[n-1])
        {
            for(i=0; i<n-2; i++)
                cout<<arr[i]<<" ";
            cout<<endl;
        }
        else
        {
            s=s+arr[n-2];
            //cout<<s<<endl;
            //cout<<arr[n-1]<<endl;
            long long temp=s-arr[n-1];
            //cout<<temp<<endl;
            if(temp<0)
            {
                cout<<-1<<endl;
            }
            else
            {
                int var,flag=0;
                for(i=0; i<n-2; i++)
                {
                    if(arr[i]==temp)
                    {
                        flag=1;
                        var=i;
                    }
                }
                if(flag==1)
                {
                    for(i=0;i<n-1;i++)
                    {
                        if(i==var)
                            continue;
                        else
                            cout<<arr[i]<<" ";
                    }
                    cout<<endl;
                }
                else
                {
                    cout<<-1<<endl;
                }
            }
        }
    }
}
