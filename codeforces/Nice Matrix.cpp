#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long m,n,i,j,var1,var2;
        long long c=0;
        cin>>m>>n;
        long long arr[m][n];
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                cin>>arr[i][j];
            }
        }
        if(m%2==0)
        {
            var1=m/2;
        }
        else
        {
            var1=m/2+1;
        }
        if(n%2==0)
        {
            var2=n/2;
        }
        else
        {
            var2=n/2+1;
        }
        for(i=0; i<var1; i++)
        {
            for(j=0; j<var2; j++)
            {
                vector <long long> v;
                v.push_back(arr[i][j]);
                v.push_back(arr[i][n-j-1]);
                v.push_back(arr[m-i-1][j]);
                v.push_back(arr[m-i-1][n-j-1]);
                sort(v.begin(),v.end());
                long long temp=(v[1]+v[2])/2;
                c=c+abs(temp-arr[i][j]);
                arr[i][j]=temp;
                c=c+abs(temp-arr[i][n-j-1]);
                arr[i][n-j-1]=temp;
                c=c+abs(temp-arr[m-i-1][j]);
                arr[m-i-1][j]=temp;
                c=c+abs(temp-arr[m-i-1][n-j-1]);
                arr[m-i-1][n-j-1]=temp;
                v.clear();
            }
        }
        /*for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }*/
        cout<<c<<endl;
    }
}
