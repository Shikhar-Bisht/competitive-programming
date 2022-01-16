#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n,sum=0,i,j,c=0,flag=0,mi;
        cin>>m>>n;
        int arr[m][n];
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>arr[i][j];
                if(arr[i][j]==0)
                {
                    flag=1;
                }
                if(i==0&&j==0)
                {
                    mi=abs(arr[i][j]);
                }
                if(abs(arr[i][j])<mi)
                {
                    mi=abs(arr[i][j]);
                }
                if(arr[i][j]<0)
                {
                    c++;
                }
                sum=sum+abs(arr[i][j]);
            }
        }
        if(flag==1)
        {
            cout<<sum<<endl;
        }
        else
        {
            if(c%2==0)
            {
                cout<<sum<<endl;
            }
            else
            {
                cout<<sum-2*abs(mi)<<endl;
            }
        }
    }
    return 0;
}
