#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int var1=m-1,var2=n-m;
    if(n==1)
    {
        cout<<1;
    }
    else if(var1>=var2)
    {
        cout<<m-1;
    }
    else if(var1<var2)
    {
        cout<<m+1;
    }
}
