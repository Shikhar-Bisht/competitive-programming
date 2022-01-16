#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n,i,j,flag=0;
    cin>>m>>n;
    char arr[m][n];
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            int var,temp=0;
            if(arr[i][j]=='*')
            {
                continue;
            }
            else if(arr[i][j]=='.')
            {
                var=0;
            }
            else
            {
                var=arr[i][j]-48;
            }
            //cout<<arr[i][j]<<" "<<var<<endl;
            for(int k=i-1; k<=i+1; k++)
            {
                for(int l=j-1; l<=j+1; l++)
                {
                    if(k<0||k>=m||l<0||l>=n)
                    {
                        continue;
                    }
                    if(k==i&&l==j)
                    {
                        continue;
                    }
                    //cout<<k<<" "<<l<<endl;
                    //cout<<arr[k][l]<<endl;
                    if(arr[k][l]=='*')
                    {
                        //cout<<k<<" "<<l;
                        temp++;
                    }
                }
            }
            //cout<<endl;
            if(temp!=var)
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
