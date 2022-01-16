#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a>0&&b>0&&c>0)
        {
            int var=b/2,i;
            if(b%2==0)
            {
                var--;
            }
            for(i=0;i<=a;i++)
            {
                cout<<"0";
            }
            for(i=0;i<var;i++)
            {
                cout<<"10";
            }
            for(i=0;i<=c;i++)
            {
                cout<<"1";
            }
            if(b%2==0)
            {
                cout<<"0";
            }
        }
        else if(a==0&&c==0)
        {
            int i;
            for(i=0;i<=b;i++)
            {
                if(i%2==0)
                {
                    cout<<"1";
                }
                else
                {
                    cout<<"0";
                }
            }
        }
        else if(a==0)
        {
            int var=b/2,i;
            for(i=0;i<var;i++)
            {
                cout<<"10";
            }
            for(i=0;i<=c;i++)
            {
                cout<<"1";
            }
            if(b%2==1)
            {
                cout<<"0";
            }
        }
        else if(c==0)
        {
            int var=b/2,i;
            for(i=0;i<var;i++)
            {
                cout<<"01";
            }
            for(i=0;i<=a;i++)
            {
                cout<<"0";
            }
            if(b%2==1)
            {
                cout<<"1";
            }
        }
        cout<<endl;
    }
}
