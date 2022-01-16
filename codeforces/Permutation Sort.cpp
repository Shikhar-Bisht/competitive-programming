#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,flag1=0,flag2=0,flag3=0,temp1,temp2;
        cin>>n;
        for(i=0; i<n; i++)
        {
            int temp;
            cin>>temp;
            if(temp!=i+1)
            {
                flag1=1;
            }
            if(i==0)
            {
                temp1=temp;
                if(temp!=1)
                {
                    flag2=1;
                }
            }
            if(i==n-1)
            {
                temp2=temp;
                if(temp!=n)
                {
                    flag3=1;
                }
            }
        }
        if(temp1==n&&temp2==1)
        {
            cout<<3<<endl;
        }
        else if(flag2==1&&flag3==1)
        {
            cout<<2<<endl;
        }
        else if(flag1==1||flag2==1||flag3==1)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<0<<endl;
        }
    }
}
