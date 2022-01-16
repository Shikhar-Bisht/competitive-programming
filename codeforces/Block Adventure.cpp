#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,m,i;
        int k;
        cin>>n>>m>>k;
        int flag=0;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(i>0)
            {
                if(arr[i]-k<=arr[i-1])
                {
                    int temp=max(0,arr[i]-k);
                    m=m+(arr[i-1]-temp);
                }
                else
                {
                    m=m-((arr[i]-k)-arr[i-1]);
                }
                if(m<0)
                {
                    flag=1;
                }
            }
        }
        if(flag==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
