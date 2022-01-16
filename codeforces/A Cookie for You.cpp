#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,n,m;
        cin>>a>>b>>n>>m;
        long long mini=min(a,b);
        if(mini<m)
        {
            cout<<"No"<<endl;
            continue;
        }
        if(mini==a)
        {
            a=a-m;
            n=n-a;
            if(b>=n)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
        else
        {
            b=b-m;
            n=n-b;
            if(a>=n)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
    }
}
