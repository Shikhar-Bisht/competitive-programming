#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,var1=-1,var2=-1;
    cin>>n;
    for(i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        if(var2==-1)
        {
            if(temp<=500000)
            {
                var1=temp;
            }
            else
            {
                var2=temp;
            }
        }
    }
    if(var2==-1)
    {
        cout<<var1-1;
    }
    else if(var1==-1)
    {
        cout<<1000000-var2;
    }
    else
    {
        if(var1-1<=1000000-var2)
        {
            cout<<1000000-var2;
        }
        else
        {
            cout<<var1-1;
        }
    }
}
