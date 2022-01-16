#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,sum=0,flag=0,i,j;
    cin>>n>>m;
    int arr[n][m];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin>>arr[i][j];
            sum=sum+arr[i][j];
        }
    }
    for(i=n-1; i>=0; i--)
    {
        for(j=m-1; j>=0; j--)
        {
            if(arr[i][j]==0)
            {
                arr[i][j]=min(arr[i+1][j],arr[i][j+1])-1;
                sum=sum+arr[i][j];
            }
            if(i==0&&j==0)
            {
                continue;
            }
            else if(i==0)
            {
                if(arr[i][j]<=arr[i][j-1])
                {
                    flag=1;
                    break;
                }
            }
            else if(j==0)
            {
                if(arr[i][j]<=arr[i-1][j])
                {

                }
            }
            else if(arr[i][j]<=arr[i-1][j]||arr[i][j]<=arr[i][j-1])
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==0)
    {
        cout<<sum;
    }
    else
    {
        cout<<-1;
    }
}
