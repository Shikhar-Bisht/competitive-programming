#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,c=0,temp1=1,temp2=1;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int flag=0;
    for(i=1;i<n;i++)
    {
        if(arr[i-1]>arr[i])
        {
            int var;
            var=i-1;
            while(var<n-1&&arr[var]>=arr[var+1])
            {
                var++;
            }
            if(i-2>=0)
            {
                if(arr[i-2]>arr[var])
                {
                    flag=1;
                    break;
                }
            }
            if(var+1<n)
            {
                if(arr[var+1]<arr[i-1])
                {
                    flag=1;
                    break;
                }
            }
            temp1=i;
            temp2=var+1;
            i=var+1;
            c++;
        }
        if(flag==1||c>1)
        {
            break;
        }
    }
    if(flag==1||c>1)
    {
        cout<<"no";
    }
    else
    {
        cout<<"yes"<<endl;
        cout<<temp1<<" "<<temp2;
    }
}
