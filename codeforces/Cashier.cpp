#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a,c=0,z=0,i;
    cin>>n>>k>>a;
    if(n==0)
    {
        cout<<k/a;
    }
    else
    {
        for(i=0;i<n;i++)
        {
            int v1,v2;
            cin>>v1>>v2;
            c=c+(v1-z)/a;
            z=v1+v2;
        }
        c=c+(k-z)/a;
        cout<<c;
    }
    return 0;
}
