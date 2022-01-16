#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,flag=0,j;
        cin>>n;
        int arr[n],i,brr[n],mainf=0,flag0=0,flag1=0;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(i>0)
            {
                if(arr[i]<arr[i-1])
                {
                    mainf=1;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            if(temp==0)
            {
                flag0=1;
            }
            else
            {
                flag1=1;
            }
        }
        if(mainf==0)
        {
            cout<<"Yes"<<endl;
        }
        else if(flag1==1&&flag0==1)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        /*for(i=0;i<n;i++)
        {
            int mini=arr[i],var=i;
            for(j=i;j<n;j++)
            {
                if(brr[j]!=brr[i])
                {
                    if(arr[j]<mini)
                    {
                        mini=arr[j];
                        var=j;
                    }
                }
            }
            arr[var]=arr[i];
            arr[i]=mini;
            if(i>0)
            {
                if(arr[i]<arr[i-1])
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }*/
    }
}
