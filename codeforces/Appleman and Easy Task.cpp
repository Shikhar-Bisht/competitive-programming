#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,c=0;
    cin>>n;
    char arr[n][n];
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            cin>>arr[i][j];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(arr[i][j]=='o')
            {
                if(j==0)
                {
                    if(arr[i][j+1]=='x')
                    {
                        c++;
                    }
                }
                else if(j==n-1)
                {
                    if(arr[i][j-1]=='x')
                    {
                        c++;
                    }
                }
                else
                {
                    if(arr[i][j+1]=='x')
                    {
                        c++;
                    }
                    if(arr[i][j-1]=='x')
                    {
                        c++;
                    }
                }
            }
        }
    }
    if(c%2==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
