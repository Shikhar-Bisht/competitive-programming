#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m],brr[n][m],i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cin>>brr[i][j];
        }
    }
    int var=n+m-1,flag=0;
    i=0;
    j=0;
    for(k=0;k<var;k++)
    {
        map<int,int> m1,m2;
        int temp1=i,temp2=j,midflag=0;
        while(temp1>=0&&temp2<m)
        {
            m1[arr[temp1][temp2]]++;
            m2[brr[temp1][temp2]]++;
            temp1--;
            temp2++;
        }
        map<int,int>::iterator it;
        for(it=m1.begin();it!=m1.end();it++)
        {
            int var=it->first;
            if(m1[var]!=m2[var])
            {
                //cout<<i<<" "<<j<<" "<<var<<endl;
                midflag=1;
                break;
            }
        }
        if(midflag==1)
        {
            flag=1;
            break;
        }
        if(i==n-1)
        {
            j++;
        }
        else
        {
            i++;
        }
        m1.clear();
        m2.clear();
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
