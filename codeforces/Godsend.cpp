#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum=0,ao=0,flag=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        if(flag==0)
        {
            if(temp%2==1)
            {
                flag=1;
            }
        }
    }
    if(flag==1)
    {
        cout<<"First";
    }
    else
    {
        cout<<"Second";
    }
}
