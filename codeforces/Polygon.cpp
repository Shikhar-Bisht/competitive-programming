#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j,mainflag=0;
        cin>>n;
        char arr[n][n];
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                cin>>arr[i][j];
            }
        }
        for(i=0; i<n-1; i++)
        {
            for(j=0; j<n-1; j++)
            {
                if(arr[i][j]=='1')
                {
                    int flag=0;
                    if(arr[i][j+1]=='1')
                        flag=1;
                    else if(arr[i+1][j]=='1')
                        flag=1;
                    if(flag==0)
                    {
                        mainflag=1;
                        break;
                    }
                }
            }
            if(mainflag==1)
                break;
        }
        if(mainflag==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
