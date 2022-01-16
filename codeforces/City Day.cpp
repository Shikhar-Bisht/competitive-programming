#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y,i,j,flag;
    cin>>n>>x>>y;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        flag=0;
        int var1=0,var2=n;
        if(i-x>0)
        {
            var1=i-x;
        }
        if(i+y+1<n)
        {
            var2=i+y+1;
        }
        //cout<<arr[i]<<" "<<i<<endl<<endl;
        for(j=var1;j<var2;j++)
        {
            //cout<<j<<" "<<arr[j]<<endl;
            if(j==i)
            {
                continue;
            }
            if(arr[i]>=arr[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            break;
        }
    }
    cout<<i+1;
}
