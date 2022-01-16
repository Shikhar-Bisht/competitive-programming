#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long m,n,i,j;
        long long  e1=0,e2=0,o1=0,o2=0;
        cin>>m;
        int arr[m];
        for(i=0;i<m;i++)
        {
            cin>>arr[i];
            if(arr[i]%2==0)
            {
                e1++;
            }
            else
            {
                o1++;
            }
        }
        cin>>n;
        int brr[n];
        for(i=0;i<n;i++)
        {
            cin>>brr[i];
            if(brr[i]%2==0)
            {
                e2++;
            }
            else
            {
                o2++;
            }
        }
        /*for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if((arr[i]+brr[j])%2==0)
                {
                    c++;
                }
            }
        }*/
        cout<<e1*e2+o2*o1<<endl;
    }
    return 0;
}
