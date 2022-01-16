#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y,d;
        cin>>n>>x>>y>>d;
        if(abs(x-y)%d==0)
        {
            cout<<abs(x-y)/d<<endl;
        }
        else
        {
            int flag1=0,flag2=0;
            if((y-1)%d==0)
                flag1=1;
            if((n-y)%d==0)
                flag2=1;
            if(flag1==0&&flag2==0)
            {
                cout<<-1<<endl;
            }
            else if(flag1==1&&flag2==1)
            {
                int var1,var2;
                var1=(x-1)/d+(y-1)/d+1;
                var2=(n-x)/d+(n-y)/d+1;
                cout<<min(var1,var2)<<endl;
            }
            else if(flag1==1)
            {
                int var1;
                var1=(x-1)/d+(y-1)/d+1;
                cout<<var1<<endl;
            }
            else
            {
                int var2;
                var2=(n-x)/d+(n-y)/d+1;
                cout<<var2<<endl;
            }
        }
    }
}
