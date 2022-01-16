#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],i,c1=0,pos1=-1,pos2=-1;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n-1;i++)
    {
        if(arr[i+1]<arr[i])
        {
            c1++;
            if(pos1==-1)
            {
                pos1=i;
            }
            else
            {
                pos2=i+1;
            }
        }
    }
    if(n==2)
    {
        cout<<"YES";
    }
    else
    {
        if(c1==0)
        {
            cout<<"YES";
        }
        else if(c1==1)
        {
            int temper=pos1;
            pos1++;
            int var=arr[pos1];
            while(pos1<n&&arr[pos1]==var)
            {
                pos1++;
            }
            pos1--;
            var=arr[temper];
            while(temper>=0&&arr[temper]==var)
            {
                temper--;
            }
            temper++;
            int temp=arr[pos1];
            arr[pos1]=arr[temper];
            arr[temper]=temp;
            int flag=0;
            for(i=0;i<n-1;i++)
            {
                if(arr[i+1]<arr[i])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                cout<<"NO";
            }
            else
            {
                cout<<"YES";
            }
        }
        else if(c1==2)
        {
            int temp=arr[pos1];
            arr[pos1]=arr[pos2];
            arr[pos2]=temp;
            int flag=0;
            for(i=0;i<n-1;i++)
            {
                if(arr[i+1]<arr[i])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                cout<<"NO";
            }
            else
            {
                cout<<"YES";
            }
        }
        else
        {
            cout<<"NO";
        }
    }
}
