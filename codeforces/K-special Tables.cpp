#include<bits/stdc++.h>
using namespace std;
int main()
{
    int var=1;
    int n,k,i,j,sum=0;
    cin>>n>>k;
    k--;
    int arr[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<k;j++)
        {
            arr[i][j]=var;
            var++;
        }
    }
    for(i=0;i<n;i++)
    {
        sum=sum+var;
        for(j=k;j<n;j++)
        {
            arr[i][j]=var;
            var++;
        }
    }
    cout<<sum<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
